#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int sign(int x)
{
	if(x>0)
	return 1;
	else 
	if(x<0)
	return -1;
	else
	return 0;
}
void GBLA(int x0,int y0,int x1,int y1){
int sx,sy,n=1,flag=0,x=x0,y=y0,t;
int dx=abs(x1-x0);
int dy=abs(y1-y0);
sx=sign(x1-x0);
sy=sign(y1-y0);
if(dy>dx)
{
	t=dx;
	dx=dy;
	dy=t;
	flag=1;
}
else
{
	flag=0;
	int p=2*dy-dx;
	putpixel(x,y,GREEN);
	delay(20);
	while(n<=dx)
	{
		if(p>=0)
		{
			x+=sx;
			y+=sy;
			p+=2*(dy-dx);
		}
		else
		{
			if(flag==1)
			{
				y+=sy;
			}
			else
			{
				x+=sx;
			}
		}
		p+=2*dy;
		putpixel(x,y,WHITE);
		n+=1;
		delay(20);
	}
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
GBLA(a,b,c,d);
getch();
}
