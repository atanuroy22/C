#include <stdio.h>
#include <conio.h>
int mul(int a,int b)
{
return(a*b);
}
int mul(int a,int b,int c)
{
return(a*b*c);
}
void main()
{
printf("Result=%d",mul(5,6));
printf("Result=%d",mul(5,6,7));
getch();
}
