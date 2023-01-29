#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
    void main()
{
Menu:
	int l,i,num,n,n2,n3,n4,table[100];

	clrscr();
	printf(" 1: Enter Elements\n 2: Search an Element\n 3: Delete an Element\n 4: Update Element\n 5: Insert Element\n 6: Exit\n\n Enter Your Selected No\n");
	scanf("%d",&num);

	 switch(num)
	 {
	  case 1:
	  printf("How Many No You Want To Insert\n");
	  scanf("%d",&n);
	  printf("Enter Numbers\n");
	  for(i=0;i<n;i++)
	  {
	  scanf("%d",&table[i]);

	   }

	    getch();
	   break;
	   case 2:
	    printf("Enter the no You Want to Search\n");
	    scanf("%d",&n2);
	  for(i=0;i<n;i++)
	  {
	  if(n2==table[i])
	   {
	     printf("Position is %d",i+1);
	   }
	   }
	     getch();
	   break;
	     case 3:
	       printf("\nEnter the no You Want to Delete\n");
	    scanf("%d",&n3);
	  for(i=0;i<n;i++)
	  {
	  if(n3==table[i])
	   {
	    for(i=i;i<n-1;i++)
	    {
	      table[i]=table[i+1];
	   }
	   }
	   }
	   n--;
	   for(i=0;i<n;i++)
	   {
	     printf("\n%d",table[i]);
	    }
	      getch();
	   break;
	     case 4:
	     printf("\nEnter the no You Want to Update\n");
	    scanf("%d",&n3);
	  for(i=0;i<n;i++)
	  {
	  if(n3==table[i])
	   {
	     printf("Enter New No\n");
	     scanf("%d",&table[i]);
	   }
	   }
	    for(i=0;i<n-1;i++)
	   {
	    printf("\n%d",table[i]);
	    }

	     getch();
	   break;
	     case 5:
	     printf("\nEnter the Location You Want to Add\n");
	    scanf("%d",&n3);
	    if(n3>=n)
	    {
	    printf("INvalid No");
	    getch();
	    break;
	    }
	    else
	    {
	      printf("\nEnter the No\n");
	    scanf("%d",&n4);

	    for(i=n;i>n3;i--)
	    {
	    table[i]=table[i-1];
	    table[n3]=n4;
	    n++;
	     }
	    }




	   for(i=0;i<n;i++)
	   {
	   printf("\n%d",table[i]);
	    }

	   getch();
	   break;
	     case 6:
	      exit(0);




       }
	goto Menu;
	  }
