//Try to Run on Turbo C++
//Since Some header Files only run on particular IDE


#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include<iostream.h>
#include<stdlib.h>

void main()
{
	/* request auto detection */
	int gdriver = DETECT, gmode, err;


	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
	 int a=0,b=0,c=0,d=0,e=0;

	//baby
	for(int i=0;i<100;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(80+a,300,15);        //head
	line(80+a,315,30+a,320); //body
	line(30+a,320,20+a,340); //leg
	line(20+a,340,5+a,345); //leg2
	line(30+a,320,10+a,335); //leg 21
	line(10+a,335,0+a,335);  //lef 22
	line(80+a,315,60+a,340); //arm
	line(80+a,315,100+a,340); //arm 2
	//toy
	 setcolor(4);
	 rectangle(280,330,300,345);
	 setfillstyle(9,3);
	 floodfill(282,332,4);
	 setcolor(1);
	line(280,348,270,353); //stand
	delay(150);
	cleardevice();
	a=a+2;

       }
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);

	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,310); //arm
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(280,330,300,345);
	setfillstyle(9,3);
	floodfill(282,332,4);
	setcolor(1);
	line(280,348,270,353); //stand
	delay(200);

	//baby sitting
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,310); //arm
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,290,260,310);
	setfillstyle(9,3);
	floodfill(242,292,4);
	setcolor(1);
	line(260,310,250,315); //stand
	delay(100);

	//baby shacking 1 down
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,340); //arm    //hand down
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,310,260,330);
	setfillstyle(9,3);
	floodfill(242,312,4);
	setcolor(1);
	line(260,330,250,345); //stand
	delay(200);

	//baby sitting up
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,310); //arm
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,290,260,310);
	setfillstyle(9,3);
	floodfill(242,292,4);
	setcolor(1);
	line(260,310,250,315); //stand
	delay(200);

	//baby shacking 2 down
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,340); //arm    //hand down
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,310,260,330);
	setfillstyle(9,3);
	floodfill(242,312,4);
	setcolor(1);
	line(260,330,250,345); //stand
	delay(200);

	//baby sitting up
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,310); //arm
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,290,260,310);
	setfillstyle(9,3);
	floodfill(242,292,4);
	setcolor(1);
	line(260,310,250,315); //stand
	delay(200);

	//baby shacking 2 down
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,340); //arm    //hand down
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,310,260,330);
	setfillstyle(9,3);
	floodfill(242,312,4);
	setcolor(1);
	line(260,330,250,345); //stand
	delay(200);

	//baby sitting up
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,310); //arm
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,290,260,310);
	setfillstyle(9,3);
	floodfill(242,292,4);
	setcolor(1);
	line(260,310,250,315); //stand
	delay(200);

	//baby shacking 2 down
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,340); //arm    //hand down
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,310,260,330);
	setfillstyle(9,3);
	floodfill(242,312,4);
	setcolor(1);
	line(260,330,250,345); //stand
	delay(200);


	//baby sitting up
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,310); //arm
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,290,260,310);
	setfillstyle(9,3);
	floodfill(242,292,4);
	setcolor(1);
	line(260,310,250,315); //stand
	delay(200);


	//baby shacking 2 down
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,340); //arm    //hand down
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,310,260,330);
	setfillstyle(9,3);
	floodfill(242,312,4);
	setcolor(1);
	line(260,330,250,345); //stand
	delay(200);

	//baby sitting up
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//baby
	circle(280,300,15);      //head
	line(280,315,280,340); //body
	line(280,340,300,350); //leg
	line(280,340,300,340); //leg2
	line(280,327,260,310); //arm
	line(280,327,300,340); //arm 2
	//toy
	setcolor(4);
	rectangle(240,290,260,310);
	setfillstyle(9,3);
	floodfill(242,292,4);
	setcolor(1);
	line(260,310,250,315); //stand
	delay(200);

	a=200;
	for(i=0;i<80;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(80+a,300,15);        //head
	line(80+a,315,30+a,320); //body
	line(30+a,320,20+a,340); //leg
	line(20+a,340,5+a,345); //leg2
	line(30+a,320,10+a,335); //leg 21
	line(10+a,335,0+a,335);  //lef 22
	line(80+a,315,60+a,340); //arm
	line(80+a,315,100+a,340); //arm 2
	//toy
	 setcolor(4);
	 rectangle(280,330,300,345);
	 setfillstyle(9,3);
	 floodfill(282,332,4);
	 setcolor(1);
	line(280,348,270,353); //stand

	delay(100);
	cleardevice();
	a=a+5;
	}



	//football
	for(i=0;i<24;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head

	line(50+b,255,50+b,310); //body

	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2

	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2

	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2
	//ball
	setcolor(3);
	circle(320,340,10);
	setfillstyle(8,14);
	floodfill(322,342,3);
	delay(200);
	cleardevice();

	//body 2
	setcolor(15);
       setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	b=b+5;
	circle(50+b,240,15);     //head

	line(50+b,255,50+b,310); //body

	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2

	line(50+b,280,30+b,267); //arm
	line(30+b,267,25+b,247); //arm 2

	line(50+b,280,75+b,290); //arm 2
	line(75+b,290,85+b,310); // arm 2 2
	//ball
	setcolor(3);
	circle(320,340,10);
	setfillstyle(8,14);
	floodfill(322,342,3);
	delay(200);
	b=b+5;
	cleardevice();
	}

	b=240;
	//play
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2
	//ball
	setcolor(3);
	circle(320,340,10);
	setfillstyle(8,14);
	floodfill(322,342,3);
	//leg movement
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,85+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2
	//ball
	setcolor(3);
	circle(320,340,10);
	setfillstyle(8,14);
	floodfill(322,342,3);
	//ball movement
	for(i=0;i<300;i=i+5)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2

	setcolor(3);
	circle(320,340-i,10);
	setfillstyle(8,14);
	floodfill(322,342-i,3);
	delay(20);
	cleardevice();
	}
	//horizontal movement
	for(i=0;i<90;i=i+5)
	{

	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);


	//body 2
	circle(50+b,240,15);     //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,30+b,267); //arm
	line(30+b,267,25+b,247); //arm 2
	line(50+b,280,75+b,290); //arm 2
	line(75+b,290,85+b,310); // arm 2 2


	setcolor(3);
	circle(320-i,41,10);
	setfillstyle(8,14);
	floodfill(322-i,41,3);
	delay(20);
	cleardevice();
	}

	for(i=0;i<300;i=i+5)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2

	setcolor(3);
	circle(235,41+i,10);
	setfillstyle(8,14);
	floodfill(237,42+i,3);
	delay(20);
	cleardevice();
	}
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,15+b,350); //leg    back movement
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2
	//ball
	setcolor(3);
	circle(235,41+i,10);
	setfillstyle(8,14);
	floodfill(237,42+i,3);
	delay(20);
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2
	//downward
	for(i=0;i<300;i=i+5)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2

	setcolor(3);
	circle(235,340-i,10);
	setfillstyle(8,14);
	floodfill(237,342-i,3);
	delay(20);
	cleardevice();
	}

	//horizontal movement
	for(i=0;i<90;i=i+5)
	{

	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);


	//body 2
	circle(50+b,240,15);     //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,30+b,267); //arm
	line(30+b,267,25+b,247); //arm 2
	line(50+b,280,75+b,290); //arm 2
	line(75+b,290,85+b,310); // arm 2 2


	setcolor(3);
	circle(235+i,41,10);
	setfillstyle(8,14);
	floodfill(237+i,41,3);
	delay(20);
	cleardevice();
	}

	//downward
	for(i=0;i<300;i=i+5)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2

	setcolor(3);
	circle(320,41+i,10);
	setfillstyle(8,14);
	floodfill(322,42+i,3);
	delay(20);
	cleardevice();
	}

	//forward

	for(i=0;i<30;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+b,240,15);        //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,35+b,297); //arm
	line(35+b,297,25+b,310); //arm 2
	line(50+b,280,80+b,263); //arm 2
	line(80+b,263,90+b,240); // arm 2 2
	//ball
	setcolor(3);
	circle(320,340,10);
	setfillstyle(8,14);
	floodfill(322,342,3);
	delay(100);
	cleardevice();

	//body 2
	setcolor(15);
       setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	b=b+5;
	circle(50+b,240,15);     //head
	line(50+b,255,50+b,310); //body
	line(50+b,310,35+b,350); //leg
	line(50+b,310,65+b,350); //leg2
	line(50+b,280,30+b,267); //arm
	line(30+b,267,25+b,247); //arm 2
	line(50+b,280,75+b,290); //arm 2
	line(75+b,290,85+b,310); // arm 2 2
	//ball
	setcolor(3);
	circle(320,340,10);
	setfillstyle(8,14);
	floodfill(322,342,3);
	delay(100);
	b=b+5;
	cleardevice();
	}



	//young

	for(i=0;i<20;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+c,190,15);        //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,35+c,267); //arm
	line(35+c,267,25+c,287); //arm 2
	line(50+c,247,80+c,237); //arm 2
	line(80+c,237,90+c,217); // arm 2 2
	//phone
	setcolor(10);
	rectangle(265,320,285,345);
	setfillstyle(2,8);
	floodfill(267,322,10);
	delay(200);
	cleardevice();
	//body 2
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	c=c+5;
	circle(50+c,190,15);     //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,80+c,267); //arm
	line(80+c,267,90+c,287); //arm 2
	line(50+c,247,35+c,237); //arm 2
	line(35+c,237,25+c,203); // arm 2 2
	//phone
	setcolor(10);
	rectangle(265,320,285,345);
	setfillstyle(2,8);
	floodfill(267,322,10);
	delay(200);
	c=c+5;
	cleardevice();
	}

	c=200;
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+c,190,15);        //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,35+c,267); //arm
	line(35+c,267,25+c,287); //arm 2
	line(50+c,247,80+c,237); //arm 2
	line(80+c,237,90+c,217); // arm 2 2

	//phone
	setcolor(10);
	rectangle(265,320,285,345);
	setfillstyle(2,8);
	floodfill(267,322,10);
	delay(150);
	cleardevice();
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1   bend
	circle(95+c,240,15);       //head

	line(50+c,247,80+c,240); //body   1

	line(50+c,247,50+c,290); //body   2
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,35+c,267); //arm
	line(35+c,267,25+c,287); //arm 2
	line(50+c,247,80+c,280); //arm 2
	line(80+c,280,90+c,300); // arm 2 2
	//phone
	setcolor(10);
	rectangle(265,320,285,345);
	setfillstyle(2,8);
	floodfill(267,322,10);
	delay(500);
	cleardevice();

	//talking
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+c,190,15);        //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,35+c,267); //arm
	line(35+c,267,25+c,287); //arm 2
	line(50+c,247,80+c,237); //arm 2
	line(80+c,237,90+c,217); // arm 2 2
	//phone
	setcolor(10);
	rectangle(275,192,295,217);
	setfillstyle(2,8);
	floodfill(277,194,10);
	delay(800);
	cleardevice();

	//talking 2
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 2
	circle(50+c,190,15);     //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,80+c,267); //arm
	line(80+c,267,90+c,287); //arm 2
	line(50+c,247,35+c,237); //arm 2
	line(35+c,237,25+c,203); // arm 2 2
	//phone
	setcolor(10);
	rectangle(225,203,245,228);
	setfillstyle(2,8);
	floodfill(227,205,10);
	delay(1000);
	cleardevice();

	//talking
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+c,190,15);        //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,35+c,267); //arm
	line(35+c,267,25+c,287); //arm 2
	line(50+c,247,80+c,237); //arm 2
	line(80+c,237,90+c,217); // arm 2 2
	//phone
	setcolor(10);
	rectangle(275,192,295,217);
	setfillstyle(2,8);
	floodfill(277,194,10);
	delay(900);
	cleardevice();

	//talking 2
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 2
	circle(50+c,190,15);     //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,80+c,267); //arm
	line(80+c,267,90+c,287); //arm 2
	line(50+c,247,35+c,237); //arm 2
	line(35+c,237,25+c,203); // arm 2 2
	//phone
	setcolor(10);
	rectangle(225,203,245,228);
	setfillstyle(2,8);
	floodfill(227,205,10);
	delay(1100);
	cleardevice();

	//talking
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+c,190,15);        //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,35+c,267); //arm
	line(35+c,267,25+c,287); //arm 2
	line(50+c,247,80+c,237); //arm 2
	line(80+c,237,90+c,217); // arm 2 2
	//phone
	setcolor(10);
	rectangle(275,192,295,217);
	setfillstyle(2,8);
	floodfill(277,194,10);
	delay(900);
	cleardevice();

	//talking 2
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 2
	circle(50+c,190,15);     //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,80+c,267); //arm
	line(80+c,267,90+c,287); //arm 2
	line(50+c,247,35+c,237); //arm 2
	line(35+c,237,25+c,203); // arm 2 2
	//phone
	setcolor(10);
	rectangle(225,203,245,228);
	setfillstyle(2,8);
	floodfill(227,205,10);
	delay(1000);
	cleardevice();

	//talking
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+c,190,15);        //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,35+c,267); //arm
	line(35+c,267,25+c,287); //arm 2
	line(50+c,247,80+c,237); //arm 2
	line(80+c,237,90+c,217); // arm 2 2
	//phone
	setcolor(10);
	rectangle(275,192,295,217);
	setfillstyle(2,8);
	floodfill(277,194,10);
	delay(800);
	cleardevice();

	//forward

	for(i=0;i<20;i++)
	{

	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+c,190,15);        //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,35+c,267); //arm
	line(35+c,267,25+c,287); //arm 2
	line(50+c,247,80+c,237); //arm 2
	line(80+c,237,90+c,217); // arm 2 2
	//phone
	setcolor(10);
	rectangle(265,320,285,345);
	setfillstyle(2,8);
	floodfill(267,322,10);
	delay(100);
	cleardevice();
	//body 2
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	c=c+10;
	circle(50+c,190,15);     //head
	line(50+c,205,50+c,290); //body
	line(50+c,290,35+c,350); //leg
	line(50+c,290,65+c,350); //leg2
	line(50+c,247,80+c,267); //arm
	line(80+c,267,90+c,287); //arm 2
	line(50+c,247,35+c,237); //arm 2
	line(35+c,237,25+c,203); // arm 2 2
	//phone
	setcolor(10);
	rectangle(265,320,285,345);
	setfillstyle(2,8);
	floodfill(267,322,10);
	delay(100);
	c=c+10;
	cleardevice();
	}

	//bigg
	for(i=0;i<20;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+d,190,15);        //head
	rectangle(40+d,209,60+d,290); //body
	line(45+d,290,35+d,350); //leg
	line(55+d,290,65+d,350); //leg2
	line(40+d,247,35+d,267); //arm
	line(35+d,267,25+d,287); //arm 2
	line(60+d,247,80+d,237); //arm 2
	line(80+d,237,90+d,217); // arm 2 2

	//bag
	circle(297,300,5);
	setcolor(9);
	rectangle(265,300,330,345);
	setfillstyle(1,6);
	floodfill(267,302,9);
	delay(200);
	cleardevice();
	//body 2
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	d=d+5;
	circle(50+d,190,15);     //head
	rectangle(40+d,209,60+d,290); //body
	line(45+d,290,35+d,350); //leg
	line(55+d,290,65+d,350); //leg2
	line(60+d,247,80+d,267); //arm
	line(80+d,267,90+d,287); //arm 2
	line(40+d,247,35+d,237); //arm 2
	line(35+d,237,25+d,203); // arm 2 2
	//bag
	circle(297,300,5);
	setcolor(9);
	rectangle(265,300,330,345);
	setfillstyle(1,6);
	floodfill(267,302,9);
	delay(200);
	d=d+5;
	cleardevice();
	}

	d=200;
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+d,190,15);        //head
	rectangle(40+d,209,60+d,290); //body
	line(45+d,290,35+d,350); //leg
	line(55+d,290,65+d,350); //leg2
	line(40+d,247,35+d,267); //arm
	line(35+d,267,25+d,287); //arm 2
	line(60+d,247,80+d,237); //arm 2
	line(80+d,237,90+d,217); // arm 2 2

	//bag
	circle(297,300,5);
	setcolor(9);
	rectangle(265,300,330,345);
	setfillstyle(1,6);
	floodfill(267,302,9);
	delay(150);
	cleardevice();

	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);

	//body 1   bend
	circle(95+d,240,15);       //head
	line(50+d,247,80+d,240); //body   1
	line(50+d,247,50+d,290); //body   2
	line(50+d,290,35+d,350); //leg
	line(50+d,290,65+d,350); //leg2
	line(50+d,247,35+d,267); //arm
	line(35+d,267,25+d,287); //arm 2
	line(50+d,247,80+d,280); //arm 2
	line(80+d,280,90+d,300); // arm 2 2
	//bag
	circle(297,300,5);
	setcolor(9);
	rectangle(265,300,330,345);
	setfillstyle(1,6);
	floodfill(267,302,9);

	delay(500);
	cleardevice();
	//pick up and go
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+d,190,15);        //head
	rectangle(40+d,209,60+d,290); //body
	line(45+d,290,35+d,350); //leg
	line(55+d,290,65+d,350); //leg2
	line(40+d,247,35+d,267); //arm
	line(35+d,267,25+d,287); //arm 2
	line(60+d,247,80+d,237); //arm 2
	line(80+d,237,90+d,217); // arm 2 2
	//bag
	circle(217,290,5);
	setcolor(9);
	rectangle(185,290,250,335);
	setfillstyle(1,6);
	floodfill(187,292,9);
	delay(500);
	int bi=0;
	//forward
	for(i=0;i<35;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(50+d,190,15);        //head
	rectangle(40+d,209,60+d,290); //body
	line(45+d,290,35+d,350); //leg
	line(55+d,290,65+d,350); //leg2
	line(40+d,247,35+d,267); //arm
	line(35+d,267,25+d,287); //arm 2
	line(60+d,247,80+d,237); //arm 2
	line(80+d,237,90+d,217); // arm 2 2
	//bag
	circle(217+bi,290,5);
	setcolor(9);
	rectangle(185+bi,290,250+bi,335);
	setfillstyle(1,6);
	floodfill(187+bi,292,9);
	delay(100);
	cleardevice();
	d=d+10;
	bi=bi+10;

	}


	//old
	for(i=0;i<7;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1
	circle(105+e,210,15);        //head
	arc(90+e,260,90,210,45);        //body
	line(50+e,285,35+e,350); //leg
	line(50+e,285,65+e,350); //leg2
	line(50+e,245,90+e,267); //arm
	line(50+e,245,100+e,287); //arm 2
	setcolor(6);
	line(100+e,287,100+e,350); //stick
	delay(1000);
	cleardevice();

	//body 2
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	e=e+15;
	circle(105+e,210,15);        //head
	arc(90+e,260,90,210,45);        //body
	line(50+e,285,35+e,350); //leg
	line(50+e,285,65+e,350); //leg2
	line(50+e,245,90+e,267); //arm
	line(50+e,245,80+e,287); //arm 2
	setcolor(6);
	line(80+e,287,80+e,350); //stick
	delay(200);
	e=e+15;
	cleardevice();

	}
	e=200;
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//body 1       still
	circle(105+e,210,15);        //head
	arc(90+e,260,90,210,45);        //body
	line(50+e,285,35+e,350); //leg
	line(50+e,285,65+e,350); //leg2
	line(50+e,245,90+e,267); //arm
	line(50+e,245,100+e,287); //arm 2
	setcolor(6);
	line(100+e,287,100+e,350); //stick

	//dead
	e=200;
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	circle(105+e,300,15);        //head
	arc(90+e,260,245,210,45);        //body
	line(50+e,285,35+e,350); //leg
	line(50+e,285,65+e,350); //leg2
	line(50+e,245,90+e,267); //arm
	line(50+e,245,100+e,287); //arm 2
	setcolor(6);
	line(100+e,287,100+e,350); //stick
	delay(400);

	for(i=0;i<30;i++)
	{
	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	setcolor(1);
	outtextxy(250+i,300-i,"*"); setcolor(2);
	outtextxy(253-i,300+i,"*"); setcolor(3);
	outtextxy(259+i,300-i,"*"); setcolor(4);
	outtextxy(263-i,310+i,"*"); setcolor(5);
	outtextxy(270+i,300-i,"*"); setcolor(6);
	outtextxy(252-i,330+i,"*"); setcolor(7);
	outtextxy(250+i,300-i,"*"); setcolor(8);
	outtextxy(255-i,300+i,"*"); setcolor(9);
	outtextxy(253+i,320-i,"*"); setcolor(10);
	outtextxy(254-i,340+i,"*"); setcolor(11);
	outtextxy(250+i,305-i,"*"); setcolor(12);
	outtextxy(250-i,305+i,"*"); setcolor(13);
	outtextxy(250+i,305-i,"*"); setcolor(14);
	outtextxy(250-i,305+i,"*"); setcolor(15);

	setcolor(1);
	outtextxy(300+i,250-i,"*"); setcolor(2);
	outtextxy(300-i,253+i,"*"); setcolor(3);
	outtextxy(300+i,259-i,"*"); setcolor(4);
	outtextxy(310-i,263+i,"*"); setcolor(5);
	outtextxy(300+i,270-i,"*"); setcolor(6);
	outtextxy(330-i,252+i,"*"); setcolor(7);
	outtextxy(300+i,250-i,"*"); setcolor(8);
	outtextxy(300-i,255+i,"*"); setcolor(9);
	outtextxy(320+i,253-i,"*"); setcolor(10);
	outtextxy(340-i,254+i,"*"); setcolor(11);
	outtextxy(305+i,250-i,"*"); setcolor(12);
	outtextxy(305-i,250+i,"*"); setcolor(13);
	outtextxy(305+i,250-i,"*"); setcolor(14);
	outtextxy(305-i,250+i,"*"); setcolor(15);

	delay(200);
	cleardevice();
	}


	setcolor(15);
	setlinestyle(SOLID_LINE,1,3);
	line(0,350,getmaxx(),350);
	line(0,351,getmaxx(),351);
	line(0,352,getmaxx(),352);
	line(0,353,getmaxx(),353);
	line(0,354,getmaxx(),354);
	line(0,355,getmaxx(),355);
	//grave
	setcolor(7);
	rectangle(270,200,370,350);
	setfillstyle(1,7);
	floodfill(274,205,7);
	setcolor(7);
	rectangle(200,320,370,350);
	setfillstyle(1,7);
	floodfill(210,325,7);
	setcolor(4);
	settextstyle(8,0,5);
	outtextxy(270,230,"R.I.P.");
	//objects
	//bag
	circle(217,290,5);
	setcolor(9);
	rectangle(185,290,250,335);
	setfillstyle(1,6);
	floodfill(187,292,9);
	//phone
	setcolor(10);
	rectangle(265,320,285,345);
	setfillstyle(2,8);
	floodfill(267,322,10);
	//toy
	 setcolor(4);
	 rectangle(280,330,300,345);
	 setfillstyle(9,3);
	 floodfill(282,332,4);
	 setcolor(1);
	line(280,348,270,353); //stand
	//ball
	setcolor(3);
	circle(320,340,10);
	setfillstyle(8,14);
	floodfill(322,342,3);


	 delay(1000);
	setcolor(15);
	settextstyle(1,0,9);
	outtextxy(90,90,"THIS IS IT");
	delay(5000);
	setcolor(4);
	settextstyle(1,0,50);
	outtextxy(290,120,"?");
	delay(5000);
	setcolor(11);
	outtextxy(600,400,"*");

	getch();

	/* deallocate memory allocated for graphic screen */
	closegraph();


}