#include <stdio.h>
#include <conio.h>
/*
Write a program to store information of student and display it using Stucture.

Here, I have store 3 information of students : rollno, name and course.
*/
// declaration of structure
struct Student
{
    int rollno;
    char name[30];
    char course[15];
};
void main()
{
    // declaring variable of structure Student
    struct Student std;
    clrscr(); //clearing the screen
    printf ("Enter roll no: \n");
    scanf("%d",&std.rollno);
    printf ("Enter name: \n");
    scanf("%s",&std.name);
    printf ("Enter course: \n");
    scanf("%s",&std.course);

    printf("Student Roll No is %d\n",std.rollno);
    printf("Student Name is %s\n",std.name);
    printf("Student Course is %s\n",std.course);
    getch(); // printing the output on the screen
}