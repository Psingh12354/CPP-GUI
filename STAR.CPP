#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
line(100,100,80,150);
line(80,150,120,150);
line(120,150,100,100);
line(100,167,80,117);
line(80,117,120,117);
line(120,117,100,167);
getch();
closegraph();
}