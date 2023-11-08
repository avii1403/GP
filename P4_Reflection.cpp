#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<stdlib.h> 
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3,ref; 
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\n enter the coordinates of triangle:\n"); 
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3); 
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1); 
line(320,0,320,460); 
line(0,230,640,230);
printf("\n enter 1 for rotating about x axis & 2 for rotating about y axis:\n"); 
scanf("%d",&ref);
if(ref==1)
{
if(y1>230)
{	
x1=x1; x2=x2; x3=x3; y1=y1-230; y2=y2-230; y3=y3-230;
}
else
{	
x1=x1; x2=x2; x3=x3; y1=y1+230; y2=y2+230; y3=y3+230;
}
}
if(ref==2)
{
if(x1>320)
{	
x1=x1; x2=x2; x3=x3; x1=x1-320; x2=x2-320; x3=x3-320;
}
else
{	
y1=y1; y2=y2; y3=y3; x1=x1+320; x2=x2+320; x3=x3+320;
}
}
printf("\n triangle after reflection"); 
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1); 
getch();
closegraph();
}
