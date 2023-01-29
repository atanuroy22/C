
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,num[100],t1=0,t2=0;
printf("how many number you want to add");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
{
if(num[i]%2==1)
{
t1=t1+1;
}
if(num[i]%2==0)
{
t2=t2+1;
}
}
printf("Total odd numbers are = %d",t1);
printf("Total Even numbers are = %d",t2);
getch();
}