#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gm,gd=DETECT;
int x1,x2,y1,y2;
initgraph(&gd,&gm,"");
line(100,100,200,40);
line(200,100,200,40);
line(200,40,400,40);
line(400,40,400,100);
line(200,100,200,300);
rectangle(130,300,180,200);
rectangle(100,100,400,300);
rectangle(240,200,300,250);
line(270,200,270,250);
line(240,225,300,225);
setbkcolor(5);
getch();
closegraph();
}