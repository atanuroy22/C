#include <stdio.h>
#include <conio.h>
 
int main()
{
	int num,i,j,k;
printf("Enter the range\n");
scanf("%d",&num);
  for(int i=1; i<=num; i++)
  {

    for(int j=1; j<=num-i; j++)
	{
      printf(" ");
    }

    for(int k=1; k<=i; k++)
	{
      printf("%d",i);
    }

    printf("\n");
  }

  return 0;
  getch();
}
