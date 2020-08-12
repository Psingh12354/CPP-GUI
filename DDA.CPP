#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#define round(a) ((int)(a+0.5))
void DDA(int xa,int ya,int xb,int yb){
int dx=(xb-xa),dy=(yb-ya),steps,k;
float xinc,yinc,x=xa,y=ya;
steps=abs(dx)>abs(dy)?abs(dx):abs(dy);
putpixel(round(x),round(y),15);
xinc=dx/float(steps);
yinc=dy/float(steps);
for(k=0;k<steps;k++)
{
x=x+xinc;
y=y+yinc;
putpixel(round(x),round(y),15);
delay(10);
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
DDA(a,b,c,d);
getch();
}