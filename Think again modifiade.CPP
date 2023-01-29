#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
#include<dir.h>
#define DIRNAME "e:\mysoft"
void main()
{
int play(void);
manu:                             //main menu.
clrscr();
FILE *fp,*ft;
int i;
struct stu
{
char name[40];
};
struct stu s;

int c1=56,en,score;
gotoxy(35, 12);
printf("Brain Reader");
gotoxy(35,14);
printf("Think Again !");
delay(2000);
clrscr();
fp=fopen("e:\\mysoft\\simple.exe","r");

if(fp==NULL)
{
gotoxy(35,10);
printf("Install Game");
gotoxy(35,20);
printf("Any key for Install Game");
getch();
goto instalation;
}
if(fp!=NULL)
{
gotoxy(60,24);
printf(":Enter ESC for Quit:");
choose:
switch(c1)
{
case 56:
gotoxy(35,15);
textcolor(RED);
cprintf ("PLAY");
gotoxy(35,20);
textcolor(WHITE);
cprintf("Uninstall Game");
en=getch();
c1=en;
if(en==13)
{
goto play;

}
else
goto choose;


case 50:
gotoxy(35,15);
textcolor(WHITE);
cprintf ("PLAY");
gotoxy(35,20);
textcolor(RED);
cprintf("Uninstall Game");
en=getch();
c1=en;
if(en==13)
{
goto unins;
}
else
goto choose;
case 27:
clrscr();
gotoxy(30,12);
printf(" Came Again!");
delay(600);
exit(0);

default:
c1=56;
goto choose;
}
}





unins:
textcolor(WHITE);
cprintf(".");
clrscr();
remove("e:\\mysoft\\simple.exe");
remove("e:\\mysoft\\rec.exe");
rmdir(DIRNAME);
for(i=0;i<100;i++)
{
gotoxy(30,12);
printf("Uninstall is sucessfully completed...%d",i);
delay(30);
clrscr();
}
gotoxy(30,10);
printf("Thanks for using Think Again");
delay(1000);
exit(0);

play:                                 // this is play.
clrscr();

score=play();
clrscr();
fp=fopen("e:\\mysoft\\rec.exe","r");
fscanf(fp,"%s",s.name);
gotoxy(30,12);
if(score>25)
{
printf("Congatulation your score = %d", score);
delay(1600);
clrscr();

printf("\n\n\n\t\t\t\tCERTIFICATE\n\n\n\n\tThis certificate that The student %s was sucessfully \nComplited-",s.name);
printf(" the Think Again Game with %d Marks.\n \n\n\n\t\t\t..Please came again & play with me.. santanu!",score);

getch();
}
else
{
gotoxy(30,12);
printf("I am sorry, Your result = %d", score);
delay(1600);
}
clrscr();
gotoxy(30,12);
printf("Ok,  Bye %s see u soon!",s.name);
getch();
exit(0);



instalation:
textcolor(WHITE);           //intalation Database.
clrscr();
fclose(fp);
fclose(ft);
fp=fopen("simple1.exe","r");

if(fp==NULL)
{
gotoxy(30,12);
printf("Some File Are Missing.. ");
gotoxy(30,15);
printf("Any Key For Exit");
getch();
exit(0);
}

mkdir(DIRNAME);
fp=fopen("e:\\mysoft\\rec.exe","w");
gotoxy(30,12);
printf("Please Enter your name\t:");
scanf("%s",s.name);
fprintf(fp,"%s",s.name);
fclose(fp);

clrscr();
int per=0;
char ch;
fp=fopen("simple1.exe","r");
ft=fopen("e:\\mysoft\\simple.exe","w");

while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
else
fputc(ch,ft);

if(ch=='\n')
{
gotoxy(30,12);
printf("Instalation will be %d kb completed:",per);
per++;
delay(50);
clrscr();

}
}

fclose(fp);
fclose(ft);
remove("simple1.exe");
clrscr();
gotoxy(35,15);
printf("Done!");
delay(500);
goto manu;

}



int play()
{
FILE *fp,*ft,*fk;
char c='\0',d='\0',a='\0';
int score=0,end=0;
struct stu
{
char name[40];
};
struct stu s;

fk=fopen("e:\\mysoft\\rec.exe","r");
fscanf(fk,"%s",s.name);

while(end<5)
{
fp=fopen("e:\\mysoft\\simple.exe","r");
while(c!='\n')
{

c=fgetc(fp);
if(c==EOF)
break;
 printf("%c",c);
}
printf("\n\n\n%s Your Options are...\n\n\n",s.name);
while((c=fgetc(fp))!='*')
{

if(c==EOF)
break;
printf("%c",c);
}
c='\0';
while((c=fgetc(fp))!='#')
{
d=fgetc(fp);
if(c==EOF)
break;
printf("%c",c);
}

printf("\n\n say answar!\n");
textcolor(BLACK);
cprintf(".");
gotoxy(30,15);
a=getche();

if(a==d)
{
textcolor(GREEN);
cprintf("Wright...");
score=score+50;
}
else
{
textcolor(RED);
cprintf("Wrong...");
score=score-25;
}
textcolor(WHITE);

c=fgetc(fp);
if(c==EOF)
break;
delay(500);
clrscr();
textcolor(WHITE);
gotoxy(40,24);
printf("Score:  %d",score);
gotoxy(1,1);
c='\0';
end++;
//delete
ft=fopen("e:\\mysoft\\temp.exe","w");

while(1)
{
c=fgetc(fp);
if(c==EOF)
break;
else
fputc(c,ft);
}

fclose(fp);
fclose(ft);
remove("e:\\mysoft\\simple.exe");
rename("e:\\mysoft\\temp.exe","e:\\mysoft\\simple.exe");
//delete
}
if(end<=4)
{
clrscr();
gotoxy(20,12);
printf(" %s Please send mail for updation...\n\n\n",s.name);
gotoxy(30,14);
printf("santanu.das15@gmail.com");
getch();
return(0);
}
else
return(score);
}