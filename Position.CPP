#include<iostream.h>
#include<conio.h>
#include<graphic.h>
void main()
{
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,"")
outtext("Priyanshu Singh");
moveto(300,300);
outtext("Position Change");
closegraph();
getch();
}