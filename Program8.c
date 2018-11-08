#include <stdio.h>
#include <conio.h>
/*
Write a program to check whether the entered number is Armstrong or not.

No assumption in this program.
*/
void main()
{
    int number, sum, remainder, temp;
    clrscr(); //clearing the screen

    printf("Enter any number: \n"); 
    scanf("%d",&number); //accepting input from the user
    
    temp = number;    
    while(number > 0)    
    {    
        remainder=number%10;    
        sum = sum + (remainder*remainder*remainder);    
        number = number / 10;    
    }    
    if(temp == sum)
    {
        printf("%d is an Armstrong  Number",temp);
    }    
    else 
    {
        printf("%d is not an Armstrong Number",temp); 
    }   
       
    getch(); // printing the output on the screen
}