#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
int mx,my;
int r=50;
mx=getmaxx()/2;
my=getmaxy()/2;
setcolor(MAGENTA);
circle(mx,my-100,r);
line(mx,my-100,mx,my-50);
line(mx,my-100,mx-50,my-100);
line(mx,my-100,mx,my-150);
line(mx,my-100,mx+50,my-100);

rectangle(mx-50,my-50,mx+50,my+50);
line(mx,my-50,mx+50,my);
line(mx,my-50,mx-50,my);
line(mx-50,my,mx,my+50);
line(mx,my+50,mx+50,my);

setfillstyle(SOLID_FILL,GREEN);
floodfill(mx-10,my-70,MAGENTA);
floodfill(mx+40,my-110,MAGENTA);
floodfill(mx+40,my-30,MAGENTA);
floodfill(mx+40,my-80,MAGENTA);
floodfill(mx-40,my+30,MAGENTA);


setfillstyle(SOLID_FILL,RED);
floodfill(mx-10,my-110,MAGENTA);
floodfill(mx-40,my-30,MAGENTA);


setfillstyle(SOLID_FILL,BLUE);
floodfill(mx+40,my-80,MAGENTA);
floodfill(mx+40,my+30,MAGENTA);

setfillstyle(SOLID_FILL,YELLOW);
floodfill(mx,my-5,MAGENTA);
getch();
closegraph();
}