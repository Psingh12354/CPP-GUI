#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void main()
{
	clrscr();
	int d=DETECT,m;
	initgraph(&d,&m,"");
	setbkcolor(5);
	setcolor(1);
	settextstyle(1,0,5);
	outtextxy(75,8,"India");
	setcolor(15);
	settextstyle(1,1,15);
	outtextxy(75,40,"Gorakhpur");
	getch();
	closegraph();
}
