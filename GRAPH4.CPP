#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd=DETECT,gm;
int mx,my;
int stangle=0,endangle=360;
int xradius=100,yradius=50;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
mx=getmaxx()/2;
my=getmaxy()/2;
setcolor(getmaxcolor());
ellipse(mx,my,stangle,endangle,xradius,yradius);






getch();
closegraph();
}