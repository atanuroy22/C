
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,num[100],temp=0;
printf("how many number you want to add");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
{
if(temp<num[i])
temp=num[i];
}
printf("Maximum number is = %d",temp);
getch();
}