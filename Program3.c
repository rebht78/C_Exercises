#include <stdio.h>
#include <conio.h>
/*
Write a program to find sum of natural numbers using for loop.

No assumption in this program.
*/
void main()
{
    int number,sum = 0, count;
    clrscr(); //clearing the screen

    printf("Enter any number: \n"); 
    scanf("%d",&number); //accepting input from the user

    // starting of for loop
    for (count = 1; count <= number; count++)
    {
        sum += count;
    }
    printf("The sum is %d",sum);
    getch(); // printing the output on the screen
}