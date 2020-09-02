#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void circleP(int x1,int y1,int x,int y)
{
//	cout<<"X1 = "<<x1;
//	cout<<"Y1 = "<<y1;
//	cout<<"X = "<<x<<endl;
//	cout<<"Y = "<<y<<endl;
	putpixel(x1+x,y1+y,15);  //1
	putpixel(x1-x,y1+y,15);  //3
	putpixel(x1+x,y1-y,15);  //7
	putpixel(x1-x,y1-y,15);  //5
	putpixel(x1+y,y1+x,15);  //2
	putpixel(x1-y,y1+x,15);  //4
	putpixel(x1+y,y1-x,15);  //8
	putpixel(x1-y,y1-x,15);  //6
}
void circlemid(int x1,int y1,int r)
{
	int x=0,y=r;
	int p=(1-r);
	circleP(x1,y1,x,y);
	while(x<y)
	{
		x++;
		if(p<0)
		p=p+2*x+1;
		else
		{
			y--;
			p=p+2*(x-y)+1;
		}
		circleP(x1,y1,x,y);
		delay(10);
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
		circlemid(p,q,m);
		outtextxy(p+m+1,q+m+1,"Circle");
	getch();
}
