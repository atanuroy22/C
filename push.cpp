#include<stdio.h>
#include<stdlib.h>
#define size 6
int top=-1;
int inp_array[size];
void push();
void pop();

void display();

int main()
{
	int choice;
	while(1)
	{
		printf("1. Push \n 2. Pop \n 3. Display\n 4. Exit \n ");
		printf("Enter Your Choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
		case 1:
			
				push();
				break;
			
	    case 2:
	    	
	    		pop();
	    		break;
			
			case 3:
				
				display();
				break;
				
    	case 4:
    		exit(0);
			
    		
    		break;
            
        default:
        	
        		printf("Invalid Enter");
			
    }
    
}
return(0);
}




void push()
{
	int x;
	if (top==size-1)
	   {
	 
	    printf("Overflow");
       }
    else
	{
		printf("\nEnter 1 to Pop\n");
		scanf("%d",&x);
		top=top+1;
		inp_array[top]=x;
	   }   
				
	}
	
	
	
void pop()
{
	if (top==-1)
	{
	printf("\nUndefined\n");
	
	}
	else
	{
	printf("Pop Element %d",inp_array[top]);
	top=top-1;
	}
}	



void display()
{
	int i;
	if(top==-1)
	{
		printf("Underflow Condition");
	}
	else
	{
		printf("\n Element in stack are\n ");
	
	for(i=top;i>=0;i--)
	{
	printf("%d",inp_array[i]);	
	}
	}
	
}
 