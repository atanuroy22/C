#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
 {
	clrscr();
	int a[100][100], b[100][100], multi[100][100], n,n2,p,p2,num;
	int i,j,k;
     printf("Enter how many row in 1st Matrix : ");
    scanf("%d", & n);
    printf("Enter how many Column in 1st Matrix: ");
    scanf("%d", & n2);
     printf("Enter the no of 1st Matrix: \n");

    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n2; j++)
     {
      printf("Enter no of a %d%d: ", i , j );
      scanf("%d", & a[i][j]);
     }
    }
     printf("Enter how many row in 2nd Matrix: ");
    scanf("%d", & p);
    printf("Enter how many Column in 2nd Matrix: ");
    scanf("%d", & p2);
    printf("Enter the no of 2nd Matrix: \n");
     for (i = 0; i < p; i++)
	{
	for (j = 0; j < p2; j++)
	{
	    printf("Enter no of b %d%d: ", i , j );
	    scanf("%d", & b[i][j]);
	}
    }
    menu :
	 printf(" 1: Add Matrix\n 2: Multiply Matrix\n 3: Sub Matrix\n 4: Exit\n\n Enter Your Selected No\n");
	scanf("%d",&num);

	 switch(num)
	 {
	  case 1:
	  printf("1st Matrix is =\n");
	  for (i = 0; i < n; i++)
       {
	for (j = 0; j < p; j++)
	 {
	 printf("%d ",a[i][j]);
	 }
	printf("\n");
       }
      printf("2nd Matrix is =\n");
	  for (i = 0; i < n; i++)
       {
	for (j = 0; j < p; j++)
	 {
	 printf("%d ",b[i][j]);
	 }
	printf("\n");
       }
	  for (i = 0; i < n; i++)
       {
	for (j = 0; j < p; j++)
	 {
	  multi[i][j] = a[i][j] + b[i][j];
	 }
       }
    printf("\nThe Add of the two matrices is: \n");
    for (i = 0; i < n; i++)
	{
	for (j = 0; j < n2; j++)
		{
	    printf("%d\t", multi[i][j]);
	}
    printf("\n");
    }
    getch();
    break;
    case 2:
    printf("1st Matrix is =\n");
	  for (i = 0; i < n; i++)
       {
	for (j = 0; j < p; j++)
	 {
	 printf("%d ",a[i][j]);
	 }
	printf("\n");
       }
      printf("2nd Matrix is =\n");
	  for (i = 0; i < n; i++)
       {
	for (j = 0; j < p; j++)
	 {
	 printf("%d ",b[i][j]);
	 }
	printf("\n");
       }
    if(n2!=p)
    {
     printf("Cannot Multiply");
     getch();
    break;
    }
    else
    {
    for (i = 0; i < n; i++)
    {
	for (j = 0; j < p; j++)
      {
	    multi[i][j] = 0;
	    for (k = 0; k < p2; k++)
	 {
		multi[i][j] = multi[i][j] + a[i][k] * b[k][j];
	 }
       }
    }
    printf("The Multiplication of the two matrices is: \n");
    for (i = 0; i < n; i++)
	{
	for (j = 0; j < n2; j++)
		{
	    printf("%d\t", multi[i][j]);
	}
	printf("\n");
    }

 getch();
}
break;
case 3:
printf("1st Matrix is =\n");
	  for (i = 0; i < n; i++)
       {
	for (j = 0; j < p; j++)
	 {
	 printf("%d ",a[i][j]);
	 }
	printf("\n");
       }
      printf("2nd Matrix is =\n");
	  for (i = 0; i < n; i++)
       {
	for (j = 0; j < p; j++)
	 {
	 printf("%d ",b[i][j]);
	 }
	printf("\n");
       }
 for (i = 0; i < n; i++)
	 {
	for (j = 0; j < p; j++)
	{
	 multi[i][j] = a[i][j] - b[i][j];
	 }
    }
    printf("The Sub of the two matrices is: \n");
    for (i = 0; i < n; i++)
	{
	for (j = 0; j < n2; j++)
		{
	    printf("%d\t", multi[i][j]);
	}
    printf("\n");
    }
getch();
break;
case 4:
exit(0);
}
goto menu;
}









