#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
Write a program to make a simple and basic calculator using switch case.

No assumption in this program.
*/
void printMenu()
{
    printf("Main Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}
void main()
{
    int choice, number1, number2,result;
    clrscr(); //clearing the screen
    printMenu();

    printf("Enter your choice: \n");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            printf("Enter two numbers for addition: \n");
            scanf("%d%d",&number1,&number2);
            result = number1 + number2;
            printf("The result is %d\n",result);
            break;
        case 2:
            printf("Enter two numbers for subtraction: \n");
            scanf("%d%d",&number1,&number2);
            result = number1 - number2;
            printf("The result is %d\n",result);
            break;
        case 3:
            printf("Enter two numbers for multiplication: \n");
            scanf("%d%d",&number1,&number2);
            result = number1 * number2;
            printf("The result is %d\n",result);
            break;
        case 4:
            printf("Enter two numbers for division: \n");
            scanf("%d%d",&number1,&number2);
            result = number1 / number2;
            printf("The result is %d\n",result);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Please enter input from the Menu!");
            break;
    }
    
    getch(); // printing the output on the screen
}