#include <stdio.h>
#include <conio.h>
/*
Write a program to sort the array in ascending order.

I've assume here, that array is of int datatype and it is one-dimensional.
*/

void main()
{
    int size,i,j,a;
    printf("Enter the size of the Array: \n");
    scanf("%d",&size);
    int number[size];
    clrscr(); //clearing the screen
    printf("Enter the numbers \n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < size; ++i) 
    {
        for (j = i + 1; j < size; ++j)
        {
           if (number[i] > number[j]) 
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");

    for (i = 0; i < size; i++)
    {
        printf("%d\n", number[i]);
    }
           
    getch(); // printing the output on the screen
}