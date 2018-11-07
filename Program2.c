#include <stdio.h>
#include <conio.h>
/*
Write a program to find sum of ‘N’ numbers using Recursion.

No assumption in this program.
*/
int sumOfNumbers(int input)
{
    if (input != 0) {
        return input + sumOfNumbers(input - 1);
    }
    else {
        return input;
    }
}
void main()
{
    int number,sum = 0;
    clrscr(); //clearing the screen

    printf("Enter any number: \n"); 
    scanf("%d",&number); //accepting input from the user

    sum = sumOfNumbers(number); //calling sumOfNumbers
    printf("The sum is %d",sum);
    getch(); // printing the output on the screen
}