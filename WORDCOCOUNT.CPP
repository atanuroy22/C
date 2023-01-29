#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int w=0, c=0, i;
 char n[100];

 printf("Please, Enter the Sentence ");
 gets(n);

 for(i=0; n[i]!=0; i++)
 {
   c++;
   if(n[i]==' ')
    {
      w++;
    }
 }
c=c-w;
printf("\nThe Number of characters =  %d",c);
 printf("\nThe Number of words =  % d",w+1);
getch();
}