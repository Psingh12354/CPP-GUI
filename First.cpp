#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdriver,gmode;
	gdriver= DETECT;
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
	closegraph();
	getch();
}

