#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
circle(300,300,100);
circle(265,275,20);
circle(335,275,20);
circle(265,280,15);
circle(335,280,15);
arc(300,325,180,360,60);
getch();
}
