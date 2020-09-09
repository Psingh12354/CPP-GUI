#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void circleplot(int x1,int y1,int x,int y)
{
	putpixel(x1+x,y1+y,7);
	putpixel(x1-x,y1+y,8);
	putpixel(x1+x,y1-y,9);
	putpixel(x1-x,y1-y,10);
	putpixel(x1+y,y1+x,11);
	putpixel(x1-y,y1+x,12);
	putpixel(x1+y,y1-x,13);
	putpixel(x1+y,y1-x,14);
	putpixel(x1-y,y1-x,15);	
}
void circlepolyfun(int x1,int y1,int r)
{
	int x=0,y=r;
	float end=r/1.414;
	while(x<=end)
	{
		y=sqrt((r*r)-(x*x));
		circleplot(x1,y1,x,y);
		x++;
		delay(30);		
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
		circlepolyfun(p,q,m);
		outtextxy(p+m+1,q+m+1,"Circle");
	getch();
}
