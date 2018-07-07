
#include<dos.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void maze(int,int);

  void projectwork2();
  void projectwork3();
  void closing();
  void starting();


void main()
{
  int gd=DETECT,gm,x,y,i;
  char ch=0;
  initgraph(&gd,&gm,"..\\bgi");
	starting();
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=30;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
  clrscr();
  setaspectratio(1600,1280);
  x=80,y=40;
  maze(x,y);
  ch=0;
  while(ch!=27)
    {
	ch=getch();
	if((x==80 && y==40) && (ch!=80))
	  {
	    sound(20*random(600));
	    delay(75);
	    nosound();
	    outtextxy(350,200,"Invalid entry!!");
	    continue;
	  }

	switch(ch)
	   {
	      case 72:    //up
		if(getpixel(x,y-10)==3)
		  {   sound(20*random(600));
		      delay(75);
		      nosound();
		      outtextxy(350,200,"Invalid entry!!");
		      continue;
		  }
		else
		   y-=10;
		break;

	      case 80:   //down
		  if(getpixel(x,y+10)==3)
		    {
			sound(20*random(600));
			delay(75);
			nosound();
			outtextxy(350,200,"Invalid entry!!");
			continue;
		    }
		  else
		    y+=10;
		  break;

	      case 77:   //right
		  if(getpixel(x+10,y)==3)
		    {
			sound(20*random(600));
			delay(75);
			nosound();
			outtextxy(350,200,"Invalid entry!!");
			continue;
		    }
		  else
		    x+=10;
		  break;

	      case 75:   //left
		  if(getpixel(x-10,y)==3)
		    {
			sound(20*random(600));
			delay(75);
			nosound();
			outtextxy(350,200,"Invalid entry!!");
			continue;
		    }
		  else
		    x-=10;
		  break;

	   }

	cleardevice();
	maze(x,y);

	if(x==310)
	  {
		outtextxy(400,60,"BOMBARDED ON ATOM!!!");
		break;
	  }

    }
    clrscr();
    delay(100);
    projectwork2();
    projectwork3();
    closing();
    getch();
    closegraph();
 }
  void projectwork2()
    {
     setbkcolor(BLUE);
     setcolor(WHITE);

     setfillstyle(1,RED);        // ATOM
     circle(310,230,30);
     floodfill(310,230,WHITE);
     setcolor(YELLOW);
     settextstyle(11,0,2);
     outtextxy(296,270,"ATOM");

     setcolor(WHITE);
     setfillstyle(1,GREEN);     // PHOTON
     circle(190,110,5);
     floodfill(190,110,WHITE);
     setcolor(GREEN);
     outtextxy(170,120,"PHOTON");
     delay(2000);
     setcolor(BLUE);
     outtextxy(170,120,"PHOTON");



     setfillstyle(1,BLACK);
     floodfill(190,110,WHITE);
     setcolor(BLACK);
     circle(190,110,5);

     setcolor(WHITE);

     circle(210,130,5);
     setfillstyle(1,GREEN);
     floodfill(210,130,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(210,130,WHITE);
     setcolor(BLACK);
     circle(210,130,5);

     setcolor(WHITE);

     circle(230,150,5);
     setfillstyle(1,GREEN);
     floodfill(230,150,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(230,150,WHITE);
     setcolor(BLACK);
     circle(230,150,5);

     setcolor(WHITE);

     circle(250,170,5);
     setfillstyle(1,GREEN);
     floodfill(250,170,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(250,170,WHITE);
     setcolor(BLACK);
     circle(250,170,5);

     setcolor(WHITE);

     circle(270,190,5);
     setfillstyle(1,GREEN);
     floodfill(270,190,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(270,190,WHITE);
     setcolor(BLACK);
     circle(270,190,5);

     setcolor(WHITE);

     circle(295,215,5);
     setfillstyle(1,GREEN);
     floodfill(295,215,WHITE);
     delay(300);
     setfillstyle(1,RED);
     floodfill(295,215,WHITE);
     setcolor(RED);
     circle(295,215,5);

     setcolor(WHITE);

     setfillstyle(1,YELLOW);        // ATOM
     circle(310,230,30);
     floodfill(310,230,WHITE);
     setcolor(YELLOW);
     settextstyle(7,0,3);
     outtextxy(115,50,"Stimulation of ATOM to Release PhotonS");
     setcolor(WHITE);
     delay(300);
     setfillstyle(1,RED);        // ATOM
     circle(310,230,30);
     floodfill(310,230,WHITE);

     setcolor(WHITE);

     circle(346,225,5);
     setfillstyle(1,GREEN);
     floodfill(346,225,WHITE);
     circle(346,235,5);
     floodfill(346,235,WHITE);
     delay(800);
     setfillstyle(1,BLACK);
     floodfill(346,225,WHITE);
     floodfill(346,235,WHITE);
     setcolor(BLACK);
     circle(346,225,5);
     circle(346,235,5);

     setcolor(WHITE);

     circle(365,205,5);
     setfillstyle(1,GREEN);
     floodfill(365,205,WHITE);
     circle(365,255,5);
     floodfill(365,255,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(365,205,WHITE);
     floodfill(365,255,WHITE);
     setcolor(BLACK);
     circle(365,205,5);
     circle(365,255,5);

     setcolor(WHITE);

     circle(385,185,5);
     setfillstyle(1,GREEN);
     floodfill(385,185,WHITE);
     circle(385,275,5);
     floodfill(385,275,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(385,185,WHITE);
     floodfill(385,275,WHITE);
     setcolor(BLACK);
     circle(385,185,5);
     circle(385,275,5);

     setcolor(WHITE);

     circle(405,165,5);
     setfillstyle(1,GREEN);
     floodfill(405,165,WHITE);
     circle(405,295,5);
     floodfill(405,295,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(405,165,WHITE);
     floodfill(405,295,WHITE);
     setcolor(BLACK);
     circle(405,165,5);
     circle(405,295,5);

     setcolor(WHITE);

     circle(425,145,5);
     setfillstyle(1,GREEN);
     floodfill(425,145,WHITE);
     circle(425,315,5);
     floodfill(425,315,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(425,145,WHITE);
     floodfill(425,315,WHITE);
     setcolor(BLACK);
     circle(425,145,5);
     circle(425,315,5);

     setcolor(WHITE);

     circle(445,125,5);
     setfillstyle(1,GREEN);
     floodfill(445,125,WHITE);
     circle(445,335,5);
     floodfill(445,335,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(445,125,WHITE);
     floodfill(445,335,WHITE);
     setcolor(BLACK);
     circle(445,125,5);
     circle(445,335,5);

     setcolor(WHITE);

     circle(465,105,5);
     setfillstyle(1,GREEN);
     floodfill(465,105,WHITE);
     circle(465,355,5);
     floodfill(465,355,WHITE);
     delay(300);
     setfillstyle(1,BLACK);
     floodfill(465,105,WHITE);
     floodfill(465,355,WHITE);
     setcolor(BLACK);
     circle(465,105,5);
     circle(465,355,5);

     setcolor(WHITE);

     circle(485,95,5);
     setfillstyle(1,GREEN);
     floodfill(485,95,WHITE);
     circle(485,375,5);
     floodfill(485,375,WHITE);
     circle(190,110,5);
     floodfill(190,110,WHITE);
     setcolor(YELLOW);
     settextstyle(11,0,2);
     outtextxy(170,120,"PHOTON");
     outtextxy(465,110,"PHOTON");
     outtextxy(465,390,"PHOTON");

     delay(5000);
     cleardevice();
    }

   void projectwork3()
   {

     setbkcolor(BLACK);
     setcolor(WHITE);
     outtextxy(145,450,"PRODUCTION OF LASER BY PHOTONS");
     rectangle(200,150,460,160);
     rectangle(200,300,460,310);
     setfillstyle(1,GREEN);
     floodfill(250,155,WHITE);
     floodfill(250,305,WHITE);
     ellipse(200,230,90,89,15,70);      //MIRROR
     setfillstyle(1,BLUE);
     floodfill(205,232,WHITE);
     ellipse(460,230,90,89,15,70);      // SEMI SILVERED MIRROR
     setfillstyle(1,CYAN);
     floodfill(465,232,WHITE);

     rectangle(300,365,360,380);       //  POWER SOURCE
     setfillstyle(1,RED);
     floodfill(305,370,WHITE);

     moveto(300,365);
     lineto(310,355);
     lineto(370,355);
     lineto(360,365);
     moveto(360,380);
     lineto(370,370);
     lineto(370,355);
     floodfill(305,362,WHITE);
     floodfill(366,370,WHITE);
     setcolor(YELLOW);
     settextstyle(11,0,2);
     outtextxy(288,390,"POWER SOURCE");
     outtextxy(300,120,"ELECTRODES");
     outtextxy(130,230,"MIRROR");
     outtextxy(480,175,"SEMI SILVERED");
     outtextxy(510,190,"MIRROR");
     setcolor(WHITE);
     moveto(370,363);
     lineto(411,363);
     lineto(411,265);
     moveto(370,366);
     lineto(413,366);
     lineto(413,265);

     rectangle(395,260,428,265);
     floodfill(396,261,WHITE);
     rectangle(395,200,428,205);
     floodfill(396,201,WHITE);
     rectangle(240,260,273,265);
     floodfill(241,261,WHITE);
     rectangle(240,200,273,205);
     floodfill(241,201,WHITE);


     moveto(255,265);
     lineto(255,376);
     lineto(300,376);
     moveto(257,265);
     lineto(257,373);
     lineto(300,373);

     setcolor(RED);

     moveto(280,205);
     lineto(280,260);
     lineto(273,260);
     moveto(273,205);
     lineto(280,205);

     moveto(435,205);
     lineto(435,260);
     lineto(428,260);
     moveto(428,205);
     lineto(435,205);

     setcolor(WHITE);
     circle(100,50,8);
     setfillstyle(1,RED);
     floodfill(100,50,WHITE);
     circle(100,85,3);
     setfillstyle(1,YELLOW);
     floodfill(100,85,WHITE);
     setcolor(YELLOW);
     outtextxy(128,47,"ATOM");
     outtextxy(128,82,"PHOTON");


//  ATOM AND PHOTON MOVEMENT

     setcolor(WHITE);
     setfillstyle(1,RED);    //ATOM
     circle(365,205,8);
     floodfill(365,205,WHITE);

     circle(325,285,8);
     floodfill(325,285,WHITE);
     delay(3000);

     circle(325,260,8);
     floodfill(325,260,WHITE);

     setfillstyle(1,BLACK);
     floodfill(325,285,WHITE);
     setcolor(BLACK);
     circle(325,285,8);

     setcolor(WHITE);

     setfillstyle(1,RED);
     circle(345,190,8);
     floodfill(345,190,WHITE);
     setfillstyle(1,BLACK);
     floodfill(365,205,WHITE);
     setcolor(BLACK);
     circle(365,205,8);
     delay(500);


     setfillstyle(1,RED);
     setcolor(WHITE);
     circle(325,170,8);
     floodfill(325,170,WHITE);
     setfillstyle(1,BLACK);
     floodfill(345,190,WHITE);
     setcolor(BLACK);
     circle(345,190,8);


     setcolor(WHITE);
     setfillstyle(1,YELLOW);
     circle(250,250,3);
     floodfill(250,250,WHITE);
     delay(100);
     circle(275,225,3);
     floodfill(275,225,WHITE);
     delay(100);
     circle(295,205,3);
     floodfill(295,205,WHITE);
     delay(100);
     circle(315,185,3);
     floodfill(315,185,WHITE);
     delay(100);
     circle(320,205,3);
     floodfill(320,205,WHITE);
     delay(100);
     circle(345,205,3);
     floodfill(345,205,WHITE);
     circle(365,205,3);
     floodfill(365,205,WHITE);
     delay(100);
     circle(385,210,3);
     floodfill(385,210,WHITE);

     circle(395,220,3);
     floodfill(395,220,WHITE);
     circle(305,225,3);
     floodfill(305,225,WHITE);

     circle(325,245,3);
     floodfill(325,245,WHITE);
     delay(100);
     circle(345,265,3);
     floodfill(345,265,WHITE);
     delay(100);
     circle(345,235,3);
     floodfill(345,235,WHITE);
     delay(100);
     circle(365,285,3);
     floodfill(365,285,WHITE);
     circle(365,230,3);
     floodfill(365,230,WHITE);
     delay(100);
     circle(395,245,3);
     floodfill(395,245,WHITE);
     delay(100);
     circle(415,225,3);
     floodfill(415,225,WHITE);
     delay(100);
     circle(425,245,3);
     floodfill(425,245,WHITE);
     delay(300);

     setlinestyle(SOLID_LINE,1,3);
     setcolor(YELLOW);
     moveto(460,230);
     lineto(600,230);      //LASER
     setcolor(YELLOW);
     outtextxy(510,240,"LASER");
     moveto(540,230);
     lineto(535,225);
     moveto(540,230);
     lineto(535,235);
     delay(3000);
     cleardevice();
}
 void starting()
  {
   setbkcolor(RED);
   setcolor(YELLOW);
   settextstyle(7,HORIZ_DIR,4);
   outtextxy(100,300,"!! PHOTON MAZE GAME !!");
   outtextxy(90,400,"!! PRODUCTION OF LASER !!");

  }

 void closing()
  {
   setbkcolor(RED);
   setcolor(YELLOW);
   settextstyle(7,HORIZ_DIR,4);
   outtextxy(160,180,"!!  THANK YOU   !!");
  }

 void maze(int x,int y)
  {
     setcolor(3);
     line(50,50,70,50);
     line(90,50,290,50);
     line(290,50,290,290);
     line(290,310,290,370);
     line(50,370,290,370);
     line(50,50,50,370);
     line(70,70,70,90);
     line(50,90,70,90);
     line(90,70,90,90);
     line(90,90,270,90);
     line(50,110,250,110);
     line(270,90,270,230);
     line(270,230,150,230);
     line(150,230,150,150);
     line(150,150,90,150);
     line(250,110,250,150);
     line(250,150,200,150);
     line(200,150,200,130);
     line(200,130,70,130);
     line(70,130,70,310);
     line(70,310,150,310);
     line(150,310,150,350);
     line(150,350,250,350);
     line(250,350,250,310);
     line(170,310,170,330);
     line(170,330,230,330);
     line(90,150,90,290);
     line(90,290,290,290);
     line(170,130,170,170);
     line(270,290,270,350);
     rectangle(170,170,250,210);
     line(70,50,70,30);
     line(90,50,90,30);
     line(290,290,310,290);
     line(290,310,310,310);
     setcolor(WHITE);
     outtextxy(95,15, "PHOTON ENTRY");
     outtextxy(365,297, "ATOM");
     circle(339,297,20);
     setcolor(YELLOW);
     circle(x,y,3);
     setfillstyle(1,2);
     floodfill(x,y,14);


  }



