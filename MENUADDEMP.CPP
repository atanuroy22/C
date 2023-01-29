#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
 {
	clrscr();
	FILE *fs;
      int num,i,j;
     // string a[100];
      char ch2,ch='y';
struct emp
   {
    char name[20];
    int age;
    float bs;
   };
struct emp e;

    menu :
    clrscr();
     int x=30,y=2;


       gotoxy(x,y+1); printf(" 1: Add Employeen");
       gotoxy(x,y+2); printf(" 2: View Employee");
       gotoxy(x,y+3); printf(" 3: Update");
       gotoxy(x,y+4); printf(" 4: Exit");
       gotoxy(x,y+6); printf(" Enter Your Selection");

       for(i=0;i<=22;i++)
       {
       gotoxy(x+i,y);printf("%c",196);
       gotoxy(x+i,y+5);printf("%c",22);
       gotoxy(x+i,y+7);printf("%c",196);
       }

	for(i=0;i<=7;i++)
       {
       gotoxy(x-1,y+i); printf("%c",179);
       gotoxy(x+22,y+i); printf("%c",179);
       }
       printf("\n");
       scanf("%d",&num);





switch(num)
    {
    case 1:
fs=fopen("demo.txt","a+");
while(ch=='y')
{
    clrscr();
    printf("Enter Employee name , Age , Basic Salary\n");
    scanf("%s%d%f",e.name,&e.age,&e.bs);
    fprintf(fs,"%s %d %f\n",e.name,e.age,e.bs);
    printf("\nAdded Succesfull\n");
    printf("Add Another Record?(Y /N)\n");
    fflush(stdin);
    ch=getche();
}
    fclose(fs);
    ch='y';
    getch();
     break;


    case 2:
 fs=fopen("demo.txt","r");
 if(fs==NULL)
 {
 printf("Cannot Find The File");
 exit(0);
 }
 else
 {
    while(1)
    {
     ch2=fgetc(fs);
     printf("%c",ch2);

     if(ch2==EOF)
     {
     fclose(fs);
     break;
     }
    }
}
    getch();
     break;


    /* case 3:
    fs=fopen("demo.txt","r");

 if(fs==NULL)
 {
 printf("Cannot Find The File");
 exit(0);
 }
 else
 {
 printf("Enter Name of Emoloyee To Modify");
 gets(a);

    while(1)
    {
     ch2=fgetc(fs);
     for


     if(ch2==EOF)
     {
     fclose(fs);
     break;
     }
    }
}
     getch();
     break;

     */
     case 4:
    exit(0);
    }
goto menu;
}









