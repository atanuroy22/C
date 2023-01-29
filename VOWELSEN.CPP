#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int w=0, i;
 char n[100];

 printf("Please, Enter the Sentence ");
 gets(n);

 for(i=0; n[i]!=0; i++)
 {
   if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U')
    {
      w++;
    }
 }
 printf("\nThe Number of words =  % d",w);
getch();
}