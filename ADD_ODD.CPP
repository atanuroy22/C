#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,num[100],t1=0;
printf("how many number you want to add");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
{
if(num[i]%2==1)
{
t1=t1+num[i];
}
}
printf("Total of all Odd numbers is = %d",t1);
getch();
}