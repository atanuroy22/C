#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
 int i=1,n;
 printf("Enter Last No");
 scanf("%d",&n);
 while(i<=n)
 {
 printf("%d ",i);
 i=i+2;
 }
 getch();
}