#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
for(i=0;i<=4;i++)
{
settextstyle(i,HORIZ_DIR,5);

outtextxy(130,100,"This is Front size");
 getch();
 clearviewport();
 }



getch();
closegraph();

}