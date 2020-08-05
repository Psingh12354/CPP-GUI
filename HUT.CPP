#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
line(150,125,100,200);
line(150,125,350,125);
line(350,125,400,200);
line(150,125,200,200);
rectangle(200,200,100,300);
rectangle(100,300,400,200);
rectangle(125,225,175,300);
circle(300,250,25);
circle(150,250,8);
circle(165,270,4);
circle(165,270,2);
line(275,250,325,250);
line(300,225,300,275);
getch();
}

