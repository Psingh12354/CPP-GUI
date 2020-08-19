#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void BLA(int x0,int y0,int x1,int y1){
	int dx,dy,p,x,y;
	dx=y1-x0;
	dy=y1-y0;
	x=x0;
	y=y0;
	p=2*dy-dx;
	while(x<x1)
	{
		if(p>=0)
		{
			putpixel(x,y,7);
			y+=1;
			p+=2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,7);
			p+=2*dy;
		}
		x+=1;
	}
}
void main(){
int gd=DETECT,gm,a,b,c,d;
clrscr();
initgraph(&gd,&gm,"");
cout<<"Enter the coordinates value"<<endl;
cout<<"X1 : ";
cin>>a;
cout<<"Y1 : ";
cin>>b;
cout<<"X2 : ";
cin>>c;
cout<<"Y2 : ";
cin>>d;
BLA(a,b,c,d);
getch();
}
