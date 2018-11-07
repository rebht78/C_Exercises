#include <stdio.h>
#include <conio.h>
/*
Write a program to print multiplication tables upto 10.

Here, I've assume that you need to print multiplication tables of a number 
till 10.

*/
void main()
{
    int number, count = 1;
    clrscr(); //clearing the screen

    printf("Enter any number: \n"); 
    scanf("%d",&number); //accepting input from the user

    while (count <= 10)
    {
        printf("%d * %d = %d\n",number,count,number*count); // printing the output 
        // in format of 5 * 1 = 5 (assuming input as 5)
        count += 1; // incrementing count by 1
    }
    getch(); // printing the output on the screen
}