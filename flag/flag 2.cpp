#include<iostream>
#include<graphics.h>


int main()
{
    int gd = DETECT, gm;
      initgraph(&gd, &gm, "");

        setcolor(WHITE);
        rectangle(90,20,110,450);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(91,21,WHITE);


        setcolor(GREEN);
        rectangle(112,22,440,170);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(113,23,GREEN);


        setcolor(RED);
        circle(250,100,50);
        setfillstyle(SOLID_FILL,RED);
        floodfill(250,101,RED);

    getch();

    closegraph();

    return 0;

}
