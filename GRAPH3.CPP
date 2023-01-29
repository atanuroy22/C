#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd=DETECT,gm;
int mx,my;

initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
rectangle(1,1,100,100);

getch();
closegraph();
}