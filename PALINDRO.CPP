#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char text[100],temp[100];
 int i,l,j,count=0;
 clrscr();
  printf("Enter any Word:");
  gets(text);
  l=strlen(text);
  for(i=0,j=l-1;i<=l;i++,j--)
  {
   temp[i]=text[j];
  }
  temp[l]=text[l];



  for(i=0;i<l;i++)
  {
   if(temp[i]==text[i])
    count++;
 }


 if(count==l)
 printf("Palindrom");
 else
 printf("Not Palindrom");



  getch();
 }

