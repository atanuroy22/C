#include<stdio.h>  
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void flood(int,int,int,int);


void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TURBOC3/bgi");
    int x1,y1;
    x1=getmaxx()/2;
    y1=getmaxy()/2;

    circle(x1,y1,40);
    flood(x1,y1,10,0);
    getch();
}




void flood(int x,int y,int fillColor, int defaultColor)
{
    if(getpixel(x,y)==defaultColor)
    {
	delay(1);
	putpixel(x,y,fillColor);
	flood(x+1,y,fillColor,defaultColor);
	flood(x-1,y,fillColor,defaultColor);
	flood(x,y+1,fillColor,defaultColor);
	flood(x,y-1,fillColor,defaultColor);
    }
}