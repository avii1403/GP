#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
void main()
{
int x1,x2,x3,y1,y2,y3,t;
int gd=DETECT, gm=DETECT; 
initgraph(&gd,&gm, "C:\\TURBOC3\\BGI"); 
printf("Enter the values of vertex v1:"); 
scanf("%d%d",&x1,&y1);
printf("Enter the values of vertexv2:"); 
scanf("%d%d",&x2,&y2);
printf("Enter the values of vertexv3:"); 
scanf("%d%d",&x3,&y3);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);
printf("Enter the multiple for scaling co-ordinates:"); 
scanf("%d",&t);
line(x1*t,y1*t,x2*t,y2*t); 
line(x2*t,y2*t,x3*t,y3*t);
line(x1*t,y1*t,x3*t,y3*t); 
getch();
closegraph();
}
