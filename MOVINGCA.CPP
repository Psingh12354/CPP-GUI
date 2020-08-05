#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
for(int i=0;i<500;i++)
{
line(125+i,200,150+i,125);
line(150+i,125,325+i,125);
line(325+i,125,325+i,200);
rectangle(100+i,200,350+i,250);
arc(175+i,250,180+i,360,25);
arc(275+i,250,180+i,360,25);
delay(10);
cleardevice();
}
getch();
}