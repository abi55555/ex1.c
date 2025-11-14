/******************
Name: Abigail tzabar
ID: 333165959
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // task 1: Ascii
    printf("Ascii:\n");
    char c;                            //declaring our 
    int lsb;

    printf("Ascii:\n");
    printf("Please enter a character\n");
    scanf("%s", &c);
    printf("Its numerical value is: %d\n", c);
    lsb = c & 1;
    printf("0 for even, 1 for odd: %d\n", lsb);


    //task 2: 2's complement and other representations
    printf("\n2's Complement to Other Representations:\n");
    int a;
    int b;
    printf("2's complement to other representations:\n");
    printf("Please enter a negetive integer: ");
    scanf("%d", &a);
    b = -(~a);
    printf("1's complement: %d\n", b);
    printf("Unsigned: %u ", a);


    //task 3: Shifting right and left
    printf("\nShifting Right and Left:\n");
    int x;
    int y;
    int z;
    printf("Shifting right and left:\n");
    printf("Please enter 3 integers:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    x = x >> y;
    x = x << z;
    printf("After shifting right and left: %d", x);

    //task 4: Even - Odd
    printf("\nEven - Odd:\n");
    int u;
    int v;
    int w;
    int result;

    printf("Even - Odd\n");
    printf("Please enter 3 integers: ");
    scanf("%d", &u);
    scanf("%d", &v);
    scanf("%d", &w);
    //result = (x & 1) + (y & 1) + (z & 1);
    result = (u & 1) | (v & 1) | (w & 1);
    printf("0 - most of them are even, 1 - most of them are odd: %d", result >> 1);

    //task 5: Different Bases
    printf("\nDifferent Bases:\n");
    
    int num1;
    int num2;
    int lsb1;
    int lsb2;
    int msb1;
    int msb2;

    printf("Different Bases:\n");
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    lsb1 = num1 & 1;
    lsb2 = num2 & 1;
    msb1 = num1 & 0;
    msb2 = num2 & 0;


    printf("LSB: %d %d\n", lsb1, lsb2);
    printf("MSB: %d %d", msb1, msb2);
    

    printf("Bye!\n");

    return 0;
}
