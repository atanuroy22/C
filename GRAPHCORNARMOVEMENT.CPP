#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void main()
{
int gd=DETECT,gm,i,j,t=2;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
int mx,my;
int r=30;

mx=getmaxx()/2;
my=getmaxy()/2;

for(j=1;j<=3;j++)
{
for(i=1;i<=250;i++)
{
circle(i,my+i,r);
setfillstyle(SOLID_FILL,t);
floodfill(i,my+i,WHITE);
delay(5);
clearviewport();
}
t++;
for(i=1;i<=250;i++)
{
circle(250+i,479-i,r);
setfillstyle(SOLID_FILL,t);
floodfill(250+i,479-i,WHITE);
delay(5);
clearviewport();
}
t++;
for(i=10;i<=250;i++)
{
circle(500-i,240-i,r);
setfillstyle(SOLID_FILL,t);
floodfill(500-i,240-i,WHITE);
delay(5);
clearviewport();
}
t++;
for(i=10;i<=240;i++)
{
circle(260-i,0+i,r);
setfillstyle(SOLID_FILL,t);
floodfill(260-i,0+i,WHITE);
delay(5);
clearviewport();
}
i=0;
t++;
}


 getch();

}