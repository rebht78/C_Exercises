#include <stdio.h>
#include <conio.h>
/*
Write a program to swap variables value Using Call by Reference.

No assumption in this program.
*/
void swapNumbers(int *num1, int *num2)
{
    int temp;
    temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}
void main()
{
    int number1, number2;
    clrscr(); //clearing the screen

    printf("Enter first number: \n"); 
    scanf("%d",&number1); //accepting input from the user
    printf("Enter second number: \n"); 
    scanf("%d",&number2); 

    printf("Before calling Swap: \n");
    printf("Number 1 : %d and Number 2 : %d\n",number1,number2);

    swapNumbers(&number1,&number2);

    printf("After calling Swap: \n");
    printf("Number 1 : %d and Number 2 : %d\n",number1,number2);
    getch(); // printing the output on the screen
}