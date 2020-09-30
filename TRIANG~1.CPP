#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#define PI 3.14
void main()
{
	int gd=DETECT,gm;
	int x1,x2,x3,y1,y2,y3,p,q;
	float angle,a,b,c,d,e,f;
	initgraph(&gd,&gm,"");
	cout<<"Enter the coordinates of triangle : \n";
	cout<<"Enter X1, Y1 : ";
	cin>>x1>>y1;
	cout<<"\nEnter X2, Y2 : ";
	cin>>x2>>y2;
	cout<<"\nEnter X3, Y3 : ";
	cin>>x3>>y3;
	cout<<"Angle : \n";
	cin>>angle;
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x1,y1,x3,y3);

	angle=(angle*PI)/180;
	p=x3;
	q=y3;
	a=((x1-p)*cos(angle)-(y1-q)*sin(angle))+p;
	b=((x1-p)*sin(angle)+(y1-q)*cos(angle))+q;
	c=((x2-p)*cos(angle)-(y2-q)*sin(angle))+p;
	d=((x2-p)*sin(angle)+(y2-q)*cos(angle))+q;
	e=((x3-p)*cos(angle)-(y3-q)*sin(angle))+p;
	f=((x3-p)*sin(angle)+(y3-q)*cos(angle))+q;
	line(a,b,c,d);
	line(c,d,e,f);
	line(a,b,e,f);
	getch();
}
