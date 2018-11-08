#include <stdio.h>
#include <conio.h>
/*
Write a program to find out the sum of series 1 + 2 + ............ + n.

Here, I have assume that 1 + 2 +....+ n should get printed with sum, where
n is the input provided by the user.
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
        if (count != number)
        {
            printf("%d + ",count);
        }
        else {
            printf("%d",count);
        }
        sum += count;
    }
    printf(" = %d",sum);
    getch(); // printing the output on the screen
}