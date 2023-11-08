#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
void main()
{

int x1,x2,x3,y1,y2,y3,xt,yt; 
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
printf("Enter the values for translating x co-ordinate:"); 
scanf("%d",&xt);
printf("Enter the values for translating y co-ordinate:"); 
scanf("%d",&yt);
line(x1+xt,y1+yt,x2+xt,y2+yt); 
line(x2+xt,y2+yt,x3+xt,y3+yt); 
line(x1+xt,y1+yt,x3+xt,y3+yt); 
getch();
closegraph();
}
