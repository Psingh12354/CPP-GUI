<h1 align=center><b>GUI</b></h1>

<p align=center>Check some Basix C++ graphic program here</p>

- **Make Body**
```
  
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
```

- **Arc** 
```
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
arc(150,150,0,180,100);
getch();
closegraph();
}
```
- **Circle**
```
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
circle(100,100,50);
getch();
closegraph();
}
```
- **Color**
```
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
```
- **Positioning**
```
  
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
```
- **Rectangle**
```
  
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
rectangle(50,100,200,300);
getch();
closegraph();
}
```

<h2 align=center><b>Thank You</b></h2>
