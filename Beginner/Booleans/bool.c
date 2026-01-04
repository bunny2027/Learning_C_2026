#include <stdio.h>
#include <stdbool.h> // not needed in C23 vbut this is a c library that allows us to use True and False

int main(void){
    bool x = true;

    if (x){
        printf("x is true\n");
    }
}