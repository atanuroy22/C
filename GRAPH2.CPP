#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd=DETECT,gm;
int mx,my;
int r=70;

initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
mx=getmaxx()/2;
my=getmaxy()/2;
circle(mx,my,r);
line(mx, my, mx, my-70);
line(mx, my, mx+70, my);
line(mx-100, my+70 ,mx+113,my+70);
line(mx-100, my+70, mx-10, my-180);
line(mx-10, my-180, mx+113, my+70);
printf("%d %d",getmaxx(),getmaxy());
getch();
closegraph();
}