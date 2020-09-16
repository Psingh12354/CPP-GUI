#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
float Wx1,Wx2,Wy1,Wy2,Vx1,Vx2,Vy1,Vy2,Sx,Sy;
float Vxmin,Vxmax,Vymin,Vymax,Wxmin,Wxmax,Wymin,Wymax;
cout<<"Enter Windows coordinate : \n";
cout<<"Wxmin : ";
cin>>Wxmin;
cout<<"Wymin : ";
cin>>Wymin;
cout<<"Wxmax : ";
cin>>Wxmax;
cout<<"Wymax : ";
cin>>Wymax;
cout<<"Enter Viewport coordinate : \n";
cout<<"Vxmin : ";
cin>>Vxmin;
cout<<"Vymin : ";
cin>>Vymin;
cout<<"Vxmax : ";
cin>>Vxmax;
cout<<"Vymax : ";
cin>>Vymax;
cout<<"Enter Coordinates lines : \n";
cout<<"Enter line coordinates : \n";
cout<<"Wx1 : ";
cin>>Wx1;
cout<<"Wy1 : ";
cin>>Wy1;
cout<<"Wx2 : ";
cin>>Wx2;
cout<<"Wy2 : ";
cin>>Wy2;
Sx=(Wxmax-Wymin)/(Wxmax-Wxmin);
Sy=(Wymax-Wymin)/(Wymax-Wymin);
rectangle(Wxmin,Wymin,Wxmax,Wymax);
rectangle(Vxmin,Vymin,Vxmax,Vymax);
outtextxy(Wxmax+2,Wymax+2,"Window");
outtextxy(Vxmax+2,Vymax+2,"Viewport");
line(Wx1,Wy1,Wx2,Wy2);
Vx1=Sx*(Wx1-Wxmin)+Vxmin;
Vy1=Sy*(Wy1-Wymin)+Vymin;
Vx2=Sx*(Wx2-Wxmin)+Vxmin;
Vy2=Sy*(Wy2-Wymin)+Vymin;
line(Vx1,Vy1,Vx2,Vy2);
getch();
}
