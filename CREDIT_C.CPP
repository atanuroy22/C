#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int c_num[16],i,sum1=0,sum2=0,t=0;
printf("Enter Credit Card Number");
for(i=0;i<16;i++)
scanf("%d",&c_num[i]);

for(i=0;i<16;i++)
{
if(i==0||i%2==0)
   {
   t=c_num[i]*2;

   if(t>=10)
   {
     t=t-9;
   sum2=sum2+t;
   t=0;
}
else
   sum1=sum1+c_num[i];
}
}
if((sum2+sum1)%10==0)
printf("this is card is vallid");
else
printf(" This Card is not Vallid");
getch();

}