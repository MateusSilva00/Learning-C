#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Minisculas  97 a 122
// Maiusculas  65 a 90

void exibeNum(char str[], int size){
  int i;
  printf("\n");
  for(i=0; i < size; i++){
      printf("[%d]", str[i]);
  }
}

void criptografar(int key, char *str, int size){

  int i;

  for(i=0; i < size; i++){
    str[i] = str[i] + key;
    if(str[i] > 122){
      str[i] = str[i] - 26;
    }
  }
}

int main(){

  int i, chave, tam;
  char frase[100];

  printf("Digite um frase: ");
  fgets(frase, sizeof(frase), stdin);
  tam = strlen(frase);


  exibeNum(frase, tam);

  printf("\nQual é a chave: ");
  scanf("%d", &chave);

  criptografar(chave, frase, tam);
  for(i=0; i < tam; i++){
    putchar(frase[i]);
  }

  return 0;
}
