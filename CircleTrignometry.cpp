#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#define round(a)((int)(a+0.5))
#define PI 3.14
void circleplot(float x1,float y1,float x,float y)
{
	putpixel(x1+x,y1+y,8);
	putpixel(x1-x,y1+y,9);
	putpixel(x1+x,y1-y,10);
	putpixel(x1-x,y1-y,11);
	putpixel(x1+y,y1+x,12);
	putpixel(x1-y,y1+x,13);
	putpixel(x1+y,y1-x,14);
	putpixel(x1-y,y1-x,15);	
}
void circletrignometry(float x1,float y1,float r)
{
	float t1=0,tend=45,tinc=1/r,ang,x,y,t=PI/180;
	while(t<tend)
	{
		ang=t*t1;
		x=r*cos(ang);
		y=r*sin(ang);
		circleplot(x1,y1,round(x),round(y));
		t1+=tinc;
	}
}

void main()
{
	int gd=DETECT,gm,p,q,m;
	initgraph(&gd,&gm,"");
		cout<<"Enter the value of coordinates : \n";
		cout<<"X : ";
		cin>>p;
		cout<<"Y : ";
		cin>>q;
		cout<<"Enter the radius : ";
		cin>>m;
		putpixel(p,q,15);
		circletrignometry(p,q,m);
		outtextxy(p+m+1,q+m+1,"Circle");
	getch();
}
