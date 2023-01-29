#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
long int p,r,i,t;
printf("Enter the Loan Amount");
scanf("%ld",&p);
printf("Enter the rate ofinterest");
scanf("%ld",&r);
printf("Enter No of installments");
scanf("%ld",&i);
t=(r*p*i)/(12*100);
printf("per Month instalment Amount is %ld ",t);
getch();
}