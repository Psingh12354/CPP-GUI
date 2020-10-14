#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
void main()
{
	int gd=DETECT,gm,x1,x2,y1,y2,p1,p2,r1,r2;
	float ang,t;
	float angle,a,b,c,d,e,f;
	initgraph(&gd,&gm,"");
	cout<<"Enter Coordiantes : \n";
	cout<<"X1 & Y1 : \n";
	cin>>x1>>y1;
	cout<<"X2 & Y2 : \n";
	cin>>x2>>y2;
	line(x1,y1,x2,y2);
	cout<<"Enter point Coordinates : \n";
	cin>>p1>>p2;
	putpixel(p1,p2,15);
	outtextxy(p1+5,p2+5,"Line 1");
	p1-=x1;
	p2-=y1;
	t=(y2-y1)/float(x2-x1); //slope t
	ang=atan(t);
	ang=-ang;
	r1=p1*cos(ang)-p2*sin(ang);
	r2=p1*sin(ang)+p2*cos(ang);
	r2=-r2;
	ang=-ang;
	r1=r1*cos(ang)-r2*sin(ang);
	r2=r1*sin(ang)+r2*cos(ang);
	r1+=x1;
	r2+=y1;
	putpixel(r1,r2,15);
	outtextxy(r1+5,r2+5,"line 2");
	getch();
}
