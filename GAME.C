#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
int ret(int x,int y);
void main()
{
char str[100];
int gd=0,gm,i=0,j=0,c=0,x=0,y=0,a=0,b=0,f=0,g=0,h=0,k=0,d=0,e=0,temp=1,ans;
int l=0,l2=0,l3=0,m=0,h1=1,m1=60,s1=60;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
settextstyle(10,0,7);
outtextxy(140,100,"welcome");
setcolor(RED);
settextstyle(1,0,5);
outtextxy(150,250,"enter to start");
printf("this game is created by SONU MITTAL");
for(i=0;i<=7;i++)
{
for(j=0;j<10;j++)
{
if(kbhit())
{
if(getch())
{
nosound();
goto start;
}
}
sound(j*i*100);
delay(300);
j++;
if(i==7)
{
for(i=5;i>0;i--)
{
for(j=10;j>0;j--)
{
if(kbhit())
{
if(getch())
{
nosound();
goto start;
}
}
sound(j*i*100);
delay(300);
}
}
}
}
}
start:
while(1)
{
if(s1==0)
{
s1=60;
m1--;
}
if(m1==0)
{
m1=60;
h1--;
}
if(h1==0)
{
settextstyle(1,0,7);
outtextxy(150,100,"time over");
setcolor(RED);
settextstyle(1,0,5);
outtextxy(180,200,"press enter");
getch();
exit(0);
}
settextstyle(2,0,0);
sprintf(str,"%d:%d:%d",h1,m1,s1);
outtextxy(15,10,str);
s1--;
setbkcolor(BLACK);
setcolor(RED);
rectangle(5,10,600,450);
rectangle(7,12,598,448);
setfillstyle(1,RED);
circle(100+i,200+j,2);
floodfill(100+i,200+j,RED);
setcolor(YELLOW);
circle(100+i,200+j,5);
line(100+i,207+j,100+i,193+j);
line(107+i,200+j,93+i,200+j);
a=100+i;
b=200+j;
ans=ret(a,b);
if(ans==1)
{
settextstyle(10,0,2);
setusercharsize(90,90,90,90);
setcolor(RED);
outtextxy(150,150,"GAME OVER");
sound(1000);
delay(500);
nosound();
getch();
exit(0);
}
setcolor(RED);
line(500,15,500,350);
line(100,15,100,180);
line(200,250,200,350);
line(420,40,420,450);
line(350,150,350,250);
line(250,15,250,250);
line(300,300,300,400);
line(120,220,120,450);
setcolor(YELLOW);
if(d==0)
{
circle(300,100,2);
}
if(e==0)
{
circle(400,200,2);
}
if(f==0)
{
circle(100,300,2);
}
if(g==0)
{
circle(550,300,2);
}
if(h==0)
{
circle(60,60,2);
}
if(k==0)
{
circle(240,30,2);
}
if(a>=298&&a<=302&&b>=98&&b<=102)
{
d=temp;
}
if(a>=398&&a<=402&&b>=198&&b<=202)
{
e=temp;
}
if(a>=98&&a<=102&&b>=298&&b<=302)
{
f=temp;
}
if(a>=548&&a<=552&&b>=298&&b<=302)
{
g=temp;
}
if(a>=58&&a<=62&&b>=58&&b<=62)
{
h=temp;
}
if(a>=238&&a<=242&&b>=28&&b<=32)
{
k=temp;
}
if(kbhit())
{
c=getch();
if(c==72)
{
x=0;
y=-1;
}
if(c==80)
{
x=0;
y=+1;
}
if(c==75)
{
x=-1;
y=0;
}
if(c==77)
{
x=1;
y=0;
}
if(c==27)
{
exit(0);
}
}
i=i+x;
j=j+y;
if(d==temp&&e==temp&&f==temp&&g==temp&&h==temp&&k==temp)
{
d=0;
e=0;
f=0;
g=0;
h=0;
k=0;
l=0;
l2=0;
l3=0;
outtextxy(150,150,"NEXT LEVEL");
settextstyle(1,0,1);
outtextxy(150,220,"press 1 or 2 or 3 key for select any level at below and press enter");
outtextxy(150,240,"1 for first");
outtextxy(150,260,"2 for second");
outtextxy(150,280,"3 for last");
scanf("%d",&m);
if(m==1)
{
l=1;
cleardevice();
setusercharsize(90,90,90,90);
settextstyle(10,0,1);
outtextxy(150,100,"loding...");
outtextxy(150,150,"press any key for start");
}
if(m==2)
{
l2=1;
cleardevice();
setusercharsize(90,90,90,90);
settextstyle(10,0,1);
outtextxy(150,100,"loding...");
outtextxy(150,150,"press any key for start");
}
if(m==3)
{
l3=1;
cleardevice();
setusercharsize(90,90,90,90);
settextstyle(10,0,1);
outtextxy(150,100,"loding...");
outtextxy(150,150,"press any key for start");
}
getch();
}
if(l2==1)
{
delay(3);
cleardevice();
if(d==0&&e==0&&f==0&&g==0&&h==0&&k==0)
{
h1=3;
}
}
else if(l3==1)
{
delay(2);
cleardevice();
if(d==0&&e==0&&f==0&&g==0&&h==0&&k==0)
{
h1=3;
}
}
else
{
delay(8);
cleardevice();
}
}
getch();
closegraph();
}
int ret(int x,int y)
{
if(x==500&&y>15&&y<350)
{
return 1;
}
else if(x==100&&y>15&&y<180)
{
return 1;
}
else if(x==200&&y>250&&y<350)
{
return 1;
}
else if(x==420&&y>40&&y<450)
{
return 1;
}
else if(x==350&&y>150&&y<250)
{
return 1;
}
if(x==250&&y>15&&y<250)
{
return 1;
}
if(x==300&&y>300&&y<400)
{
return 1;
}
if(x==120&&y>220&&y<450)
{
return 1;
}
if(x==5&&y>10&&y<450)
{
return 1;
}
if(x==600&&y>10&&y<450)
{
return 1;
}
if(y==10&&x>5&&x<600)
{
return 1;
}
if(y==450&&x>5&&x<600)
{
return 1;
}
}

