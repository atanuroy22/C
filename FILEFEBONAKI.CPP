#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
  FILE * fp;
 char ch;
 int a=0,b=1,c=0,n;
 fp = fopen("demo.txt", "w");
 printf("Enter Last No\n");
 scanf("%d",&n);
 printf("%d %d ",a,b);
 while((c=a+b)<=n)
 {
 fprintf(fp," %d ",c);
 printf("%d ",c);
 a=b;
 b=c;
 }

fclose(fp);
  getch();
}