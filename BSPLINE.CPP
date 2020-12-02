#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<dos.h>
double basis(int i,int k,double knot[],double stpos){
double val;
if(k==1)
{
if(knot[i]<=stpos && stpos<knot[i+1])
return 1;
else
return 0;
}
return ((stpos-knot[i])*basis(i,k-1,knot,stpos))/(knot[i+k-1]-knot[i])+
((knot[i+k]-stpos)*basis(i+1,k-1,knot,stpos))/
(knot[i+k]-knot[i+1]);

}
void main(){
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"");
int xc[6]={20,90,260,310,490,490};
int yc[6] ={170,140,20,410,60,80};
double knot[] = {0,1,2,3,4,5,6,7};
int k=4;
double bas,stpos,endpos,slice,x,y,lx,ly;
stpos = knot[k-1], endpos = knot[8-k], slice = (endpos-stpos)/100;
lx=xc[0];ly=yc[0];
int i=0;
for(;stpos<endpos;stpos+=slice){
x=y=0;
for(int i=0;i<=5;i++){
bas=basis(i,k,knot,stpos);
x+=xc[i]*bas;
y+=yc[i]*bas;
}
delay(8);
line(lx,ly,x,y);
lx=x;ly=y;
 }
 setcolor(5);
for(i=0;i<6;i++)
outtextxy(xc[i],yc[i],"*");
getch();
}
