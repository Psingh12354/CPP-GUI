#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#define PI 3.14
void main()
{
	int gd=DETECT,gm;
    int arr[] = {320, 150, 400, 250,  
                 250, 350, 320, 150}; 
	float angle,a,b,c,d,e,f;
	int p,q;
	initgraph(&gd,&gm,"");
	cout<<"Angle : \n";
	cin>>angle;
	drawpoly(4,arr);
	angle=(angle*PI)/180;
	p=arr[4];
	q=arr[5];
	a=((arr[0]-p)*cos(angle)-(arr[1]-q)*sin(angle))+p;
	b=((arr[0]-p)*sin(angle)+(arr[1]-q)*cos(angle))+q;
	c=((arr[2]-p)*cos(angle)-(arr[3]-q)*sin(angle))+p;
	d=((arr[2]-p)*sin(angle)+(arr[3]-q)*cos(angle))+q;
	e=((arr[4]-p)*cos(angle)-(arr[5]-q)*sin(angle))+p;
	f=((arr[4]-p)*sin(angle)+(arr[5]-q)*cos(angle))+q;
	line(a,b,c,d);
	line(c,d,e,f);
	line(a,b,e,f);
	getch();
}
