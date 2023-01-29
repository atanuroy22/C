#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
 int a=0,b=1,c=0,n;
 printf("Enter Last No\n");
 scanf("%d",&n);
 printf("%d %d ",a,b);
 while((c=a+b)<=n)
 {
 printf("%d ",c);
 a=b;
 b=c;
 }
 getch();
}