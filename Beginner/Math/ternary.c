// Ternary Operators  are expressions whose value depends on a result on a conditional embedded in it

int main(){
    int y;
    int x;
    // If x > 10, add 17 to y. Otherwise add 37 to y
    y += x > 10? 17: 37;
    // the expression above is the same as this:

    if (x >10)
        y += 17;
    else
        y += 37;
    //another version
    printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");

}