#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int graphicdrive,graphicmode;
graphicdrive=DETECT;
initgraph(&graphicdrive,&graphicmode,"");
closegraph();
getch();
}