#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 clrscr();
   int i=0;
  abc:
	   printf(" %d ",i);
	   i++;
	   delay(100);

  if(i<100)
  goto abc;


  getch();
 }