# include <stdio.h>
int main(){
    int i = 0;
    i ++; // adds one ot i post increment this is like the python add one after evey loop (post- Increment)
    printf("incremented num %d\n", i );
    i --; //subtracts one from i 
    printf("decrement num %d\n", i);
    //Shorter version ( same as the puth version )
    i += 1;
    i -= 1;
    // how to add and subtract pre-increment this adds/subtracts 1  befor the number is initialized 
    ++i;
    printf("incremented num %d\n", i );
    --i;
    printf("decrament num %d\n", i );

    int j;
    i = 10;
    j = 5 + i++; // Compute 5 + i, _then_ increment i
    printf("%d, %d\n", i, j); // Prints 11, 15
    // you'll mainly come across these in for loops and other operations

}