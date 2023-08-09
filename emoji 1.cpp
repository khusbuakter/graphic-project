#include<iostream>
#include<graphics.h>

int main()
{
      int gd = DETECT, gm;
      initgraph(&gd, &gm, "");


        setcolor(YELLOW);
        circle(300,300,160);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(274,284,YELLOW);



setcolor(BLACK);
circle(240,260,45);
setfillstyle(SOLID_FILL,WHITE);
floodfill(230,260,BLACK);



setcolor(BLACK);
ellipse(240,280,0,360,20,25);
setfillstyle(SOLID_FILL,BLACK);
floodfill(240,280,BLACK);


setcolor(BLACK);
circle(360,260,45);
setfillstyle(SOLID_FILL,WHITE);
floodfill(360,260,BLACK);



setcolor(BLACK);
ellipse(360,280,0,360,20,25);
setfillstyle(SOLID_FILL,BLACK);
floodfill(360,280,BLACK);



setcolor(BLACK);

ellipse(300,390,0,180,70,40);
ellipse(300,390,0,180,69,39);
ellipse(300,390,0,180,68,38 );
ellipse(300,390,0,180,67,37);
ellipse(300,390,0,180,66,36);




    getch();

    closegraph();

    return 0;
}

