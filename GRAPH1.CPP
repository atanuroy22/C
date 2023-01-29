#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd=DETECT,gm;
int mx,my;
int r=100;

initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
mx=getmaxx()/2;
my=getmaxy()/2;
circle(mx,my,r);
printf("%d %d",getmaxx(),getmaxy());
getch();
closegraph();
}