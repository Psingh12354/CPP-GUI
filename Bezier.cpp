#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<dos.h>
void main(){
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"");
int x[4],y[4],i;
double t,xt,yt;
cout<<"Enter Coordinates"<<endl;
for(i=0;i<4;i++){
cout<<"Control Point "<<i+1<<": ";
cin>>x[i]>>y[i];
}cout<<endl;
for(t=0.0;t<1.0;t+=0.0005){
xt=pow(1-t,3)*x[0] + 3*t*pow(1-t,2)*x[1] + 3*pow(t,2)*(1-t)*x[2] + pow(t,3)*x[3];
yt=pow(1-t,3)*y[0] + 3*t*pow(1-t,2)*y[1] + 3*pow(t,2)*(1-t)*y[2] + pow(t,3)*y[3];
putpixel(xt,yt,15);
delay(4);
}
for(i=0;i<4;i++)
outtextxy(x[i],y[i]-3,"*");
getch();
closegraph();
}
