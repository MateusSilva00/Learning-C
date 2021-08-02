#include <stdio.h>

void A(){
    printf("I am function A\n");
}

void B(void (*ptr)()){
    (*ptr) ();
}

int main(){
    
    void (*ptr)() = &A;
    B(ptr);

}
