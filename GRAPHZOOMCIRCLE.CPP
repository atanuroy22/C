#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
int mx,my;
int r=30;

mx=getmaxx()/2;
my=getmaxy()/2;

for(i=10;i<=150;i++)
{

circle(mx,my,r+i);
delay(70);
clearviewport();
}

 getch();

}