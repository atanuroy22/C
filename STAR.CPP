#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,k;
printf("Enter any number");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
{
for (k=n-i;k>=1;k--)
{
printf(" ");
}
for (j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}
getch();
}