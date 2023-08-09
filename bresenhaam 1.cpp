#include <iostream>
#include <graphics.h>

void Bres_circle(double x1, double y1, double r)
{
	double x = 0, y = r;

	double p = 3  -  (2 * r);

	while(x <= y)
	{
		putpixel(x1 + x, y1 + y, WHITE);
		putpixel(x1 - x, y1 + y, BLUE);
		putpixel(x1 + x, y1 - y, RED);
		putpixel(x1 - x, y1 - y, YELLOW);
		putpixel(x1 + y, y1 + x, GREEN);
		putpixel(x1 + y, y1 - x, BROWN);
		putpixel(x1 - y, y1 + x, RED);
		putpixel(x1 - y, y1 - x, BLUE);

		x=x + 1;
		if(p<0)
			p=p + 4*(x) + 6;
		else
		{
			p=p + 4*(x - y) + 10;
			y=y - 1;
 		}

		delay(100);
 	}
}
int main()
{
	double x1, y1, r;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

    printf("Enter the starting co - ordinates of a center (x, y): ");
	scanf("%lf %lf", &x1, &y1);
	printf("Enter the value of radius: ");
	scanf("%lf", &r);

	Bres_circle(x1, y1, r);
	getch();
	closegraph();
	return 0;
}
