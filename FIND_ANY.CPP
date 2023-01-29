#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,num[100],f,temp=0;
printf("how many number you want to add");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
printf("Enter the number you want to find");
scanf("%d",&f);
for(i=0;i<n;i++)
{
if (f==num[i])
{
temp=1;
break;
}
}

 if(temp==1)
 printf("location =%d",i);
 else
 printf("Number not found");
getch();
}