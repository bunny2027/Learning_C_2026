#include <stdio.h>
// remember %d is for integers and %f is for floats
int main(){
    int i = 5 ;
    i = i + 3; //  Addition
    printf("i = %d\n", i); 
    i = i - 8; // Subtraction
    printf("i = %d\n", i);
    i = (i + 1) * 3; // multiplication
    printf("i = %d\n", i);
    i = i/2; //Division 
    printf("i = %d\n", i);
    i = i % 5; // remainder
    printf("i = %d\n", i);

    int j = 2;
    j += 3;
    j -= 1;
    j *= 6;
    j /= 3;
    printf("j = %d\n", j);
    j %= 3;
    printf("j = %d", j);  

    return 0;
}