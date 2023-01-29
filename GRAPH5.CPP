 #include <graphics.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <conio.h>

 int main(void)
 {
    /* request auto detection */
    int gdriver = DETECT, gmode, errorcode;
    int maxx, maxy;

    /* initialize graphics, local variables
*/
    initgraph(&gdriver, &gmode, "c:\\TURBOC3\\BGI");

    /* read result of initialization */
    errorcode = graphresult();
    if (errorcode != grOk)
    /* an error occurred */
    {
       printf("Graphics error: %s\n", grapherrormsg(errorcode));
       printf("Press any key to halt:");
       getch();
       exit(1);
       /* terminate with an error code */
    }

    maxx = getmaxx();
    maxy = getmaxy();

    /* select drawing color */
    setcolor(RED);

    /* select fill color */
    /* draw a border around the screen */
    rectangle(0, 0, maxx, maxy);

    /* draw some circles */
    circle(maxx / 3, maxy /2, 50);
    circle(maxx / 2, 20, 100);
    circle(maxx-20, maxy-50, 75);
    circle(20, maxy-20, 25);

    /* wait for a key */
    getch();

    /* fill in bounded region */
    setfillstyle(LINE_FILL, GREEN);
    floodfill(2,2,RED);
    setfillstyle(LINE_FILL, BLUE);
    floodfill(maxx / 3, maxy /2, RED);
    floodfill(maxx / 2, 20, RED);
    floodfill(maxx-20, maxy-50, RED);
    floodfill(20, maxy-20, RED);

    /* clean up */
    getch();
    closegraph();
    return 0;
 }