#include <stdio.h>
//RA2111029010064
//Anish Patil
int main()
{
    int a,b,c,d;
    //Assignment Operator
    c=1; d=0;
    //Arithmatic Operators
    scanf("%i %i", &a, &b);
    printf("%i\n", a+b);
    printf("%i\n", a-b);
    printf("%i\n", a*b);
    printf("%i\n", a/b);
    printf("%i\n", a%b);
    //Relational Operators
    if(a>b){
        printf("%i is Greater\n", a);
    }
    else{
        printf("%i is Greater\n", b);
    }
    //Increment and Decrement Operators
    printf("%i comes after %i\n", ++a, a);
    printf("%i comes before %i\n", --a, a);
    printf("Size of int=%i bytes\n", sizeof(a));
    //Logical Operators
    if(a>b && a>c){
        printf("%i is greater than %i and %i\n", a, b, c);
    }
    if(a>b || a>c){
        printf("%i\n", a);
    }
    //Bitwise Operators
    printf("Bitwise #1= %i\n", a&b);
    printf("Bitwise #2= %i\n", a|b);
    printf("Bitwise #3= %i\n", a^b);
    printf("Bitwise #4= %i\n", ~a);
    //Shift Operator(Bitwise)
    int i=1;
    printf("Right Shift by %i: %i\n", i, a>>i);
    printf("Left Shift by %i: %i\n", i, a<<i);
    return 0;


}