#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
/*
Write a program to fill a color in circle.

No assumption in this program.
*/
void main()
{
    int driver, mode, n;
    float angle;
    char string[80];
    clrscr();       
    driver = DETECT;
    initgraph(&driver,&mode,"");
    setcolor(MAGENTA);
    circle(300,250,200);
    setfillstyle(SOLID_FILL_YELLOW);
    floodfill(300,75,MAGENTA);
    getch(); // printing the output on the screen
    restorecrtmode();
}