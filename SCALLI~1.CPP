#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int x1,x2,x3,y1,y2,y3,tx,ty,sx,sy,x;
	cout<<"Enter the coordinate : \n";
	cout<<"X1 : ";
	cin>>x1;
	cout<<"Y1 : ";
	cin>>y1;
	cout<<"X2 : ";
	cin>>x2;
	cout<<"Y2 : ";
	cin>>y2;
	cout<<"X3 : ";
	cin>>x3;
	cout<<"Y3 : ";
	cin>>y3;
	cout<<"Enter option to select : \n1.Translation\n2.Scalling\n3.Rotation\n";
	cin>>x;
	switch(x)
	{
	case 1:
		cout<<"Enter translation factor : \n";
		cout<<"Tx : ";
		cin>>tx;
		cout<<"Ty : ";
		cin>>ty;
		int p[]={x1,y1,x2,y2,x3,y3,x1,y1};
		int q[]={x1+tx,y1+ty,x2+tx,y2+ty,x3+tx,y3+ty,x1+tx,y1+tx};
		drawpoly(4,p);
		drawpoly(4,q);
		outtextxy((x3+x2+tx+tx+10)/2,(y3+y2+ty+ty)/2,"Translation");
		break;
	case 2:
		cout<<"Enter scalling factor\n";
		cout<<"Sx : ";
		cin>>sx;
		cout<<"Sy : ";
		cin>>sy;
		int pp[]={x1,y1,x2,y2,x3,y3,x1,y1};
		int qq[]={x1*sx,y1*sy,x2*sx,y2*sy,y3*sx,y3*sy,x1*sx,y1*sy};
		drawpoly(4,pp);
		drawpoly(4,qq);
		outtextxy((x3*sx+x2*sx+10)/2,(y3*sy+y2*sy)/2,"Scalling");
		break;
	case 3:
		float rx1,rx2,rx3,ry1,ry2,ry3,T;
		cout<<"Enter rotation factor\n";
		cin>>T;
		T=T*(3.142/180);
		rx1=x1*cos(T)-y1*sin(T);
		ry1=y1*cos(T)+x1*sin(T);
		rx2=x2*cos(T)-y2*sin(T);
		ry2=y2*cos(T)+x2*sin(T);
		rx3=x3*cos(T)-y3*sin(T);
		ry3=y3*cos(T)+x3*sin(T);
		int r[]={x1,y1,x2,y2,x3,y3,x1,y1};
		int rr[]={rx1,ry1,rx2,ry2,rx3,ry3,rx1,ry1};
		drawpoly(4,r);
		drawpoly(4,rr);
		outtextxy((rx3+rx2+10)/2,(ry3+ry2)/2,"Rotation");
		break;
	default:
		cout<<"Wrong Input\n";
	}
	getch();
}
