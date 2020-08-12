#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#define round(a) ((int)(a+0.5))
void DDA(int x0,int y0,int x1,int y1){ 																																			\
int dx=(x1-x0),dy=(y1-y0),steps,k;
float xinc,yinc,x=x0,y=y0;
steps=abs(dx)>abs(dy)?abs(dx):abs(dy);
putpixel(round(x),round(y),15);
float n=log10(steps)/log10(2);
xinc=dx/(pow(2,n));
yinc=dy/(pow(2,n));
for(k=0;k<steps;k++)
{
x+=xinc;
y+=yinc;
putpixel(round(x),round(y),15);
delay(10);
}
}
void main()
{
int gd=DETECT,gm,a,b,c,d;
clrscr();
initgraph(&gd,&gm,"");
cout<<"Enter ";
cout<<"X0 : ";
cin>>a;
cout<<"Y0 : ";
cin>>b;
cout<<"X1 : ";
cin>>c;
cout<<"Y1 : ";
cin>>d;
DDA(a,b,c,d);
}