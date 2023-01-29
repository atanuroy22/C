#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,num[100],temp=0,cou=0;
printf("how many number you want to add");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
{



for(int j=1;j<=num[i];j++)
{
if(num[i]%j==0)
{
temp=temp+1;
}
}
if(temp==2)
{
cou++;
printf("%d ",num[i]);
}
temp=0;
}



printf("\nTotall no of prime is = %d",cou);
getch();

}