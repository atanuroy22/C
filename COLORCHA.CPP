#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main()
{
int i;
while(!kbhit())
{
textcolor(i);
cprintf("\nhelow world %d", i);
delay(100);
i++;
clrscr();
}
}
