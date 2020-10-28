#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#define xmin 150
#define xmax 500
#define ymin 100
#define ymax 370
unsigned int encode(int x,int y)
{
unsigned int c=0x0;
enum
{
ABOVE = 0x8,BELOW = 0x4,RIGHT = 0x2,LEFT = 0x1
};
if(x<xmin)
	c=c|LEFT;
	if(x>xmax)
		c=c|RIGHT;
		if(y<ymin)
			c=c|BELOW;
			if(y>ymax)
				c=c|ABOVE;
return c; 
}

void check(unsigned c1,unsigned c2) 
{
if (!(c1|c2))
	cout<<"Line is Inside";
else 
if (c1&c2) 
	cout<<"Outside";
else
	cout<<"Line is Clipping Candidate";
cout<<"\n";
}

void bin(unsigned int c){
for(int i=8;i>0;i=i/2) 
(c&i)?cout<<"1":cout<<"0";
cout<<endl;
}
void main(){
	
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"");
int x1,x2,y1,y2;
unsigned int code1,code2;
cout<<"X1,Y1 : ";
cin>>x1>>y1;
cout<<"X2,Y2 : ";
cin>>x2>>y2;
line(xmin,0,xmin,getmaxy());
line(xmax,0,xmax,getmaxy());
line(0,ymin,getmaxx(),ymin);
line(0,ymax,getmaxx(),ymax);
code1=encode(x1,y1); //to calculate the region code
code2=encode(x2,y2);
line(x1,y1,x2,y2);
cout<<"Point 1 : ";
bin(code1);
cout<<"Point 2 : ";
bin(code2);
check(code1,code2,)
check(code1,code2);
getch();
closegraph();
}

