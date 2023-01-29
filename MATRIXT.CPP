#include <stdio.h>
#include <conio.h>
void main()
 {
 clrscr();
    int a[100][100], transpose[100][100],n,n1,i, j;

    printf("Enter how many row you want to multiply: ");
    scanf("%d", & n);
    printf("Enter how many column you want to multiply: ");
    scanf("%d", & n1);
    printf("Enter the no of Matrix: \n");

    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n1; j++)
     {
      printf("Enter no of matrix %d%d: ", i , j );
      scanf("%d", & a[i][j]);
     }

    }

    for (i = 0; i < n; i++)
    {
	for (j = 0; j < n1; j++)
      {
    transpose[j][i] = a[i][j];

       }
    }

    printf("The Transposof the matrics is: \n");
    for (i = 0; i < n1; i++)
	{
	for (j = 0; j < n; j++)
		{
	    printf("%d\t", transpose[i][j]);
	}
	printf("\n");
    }
 getch();
}