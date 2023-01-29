#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,num[100],temp1=0,temp2=0,t1=0,t2=0;
printf("how many number you want to add");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
{
if(temp1<num[i])
{
temp1=num[i];
}
temp2=num[0];
if(temp2>num[i])
{
temp2=num[i];
}
}
printf("Max = %d +Min=%d=%d",temp1,temp2,temp1+temp2);
getch();
}