#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 setbkcolor(10);
 for(int i=0;i<20;i++)
 {
  setcolor(i);
  setlinestyle(0,0,3);
		//tummy
  ellipse(235,250,129,423,100,90);
  ellipse(236,250,129,423,100,90);
  ellipse(240,320,0,360,4,4);
		//leg
  ellipse(170,330,107,355,100,50);
  ellipse(343,330,220,100,80,50);
  ellipse(290,420,420,500,50,70);
  ellipse(289,421,420,500,50,70);
  ellipse(288,422,420,500,50,70);
  ellipse(287,423,420,500,50,70);
		 //head middle
  ellipse(220,150,420,480,40,51);
  ellipse(220,151,420,480,40,51);
  ellipse(219,152,420,480,40,51);
  ellipse(221,152,420,480,40,51);
		//head ear
  ellipse(180,157,420,480,40,51);
  ellipse(260,157,420,480,40,51);
		//headpoint1
  ellipse(220,93,0,360,20,2);
  ellipse(220,94,0,360,20,2);
		//headpoint2
  ellipse(220,83,0,360,10,2);
  ellipse(220,84,0,360,10,2);
		//headpoint3
  ellipse(220,73,0,360,4,4);
  ellipse(220,74,0,360,4,4);
		//right hand
  ellipse(220,150,420,480,40,51);
  ellipse(115,270,0,360,15,20);
  ellipse(115,271,0,360,15,20);
  ellipse(115,272,0,360,15,20);
  ellipse(115,273,0,360,15,20);
  ellipse(120,270,0,150,5,10);
  ellipse(120,271,0,150,5,10);
  ellipse(120,272,0,150,5,10);
		//left hand
  ellipse(365,220,220,330,25,51);
  ellipse(365,221,220,330,25,51);
  ellipse(365,222,220,330,25,51);
  ellipse(365,230,220,330,22,31);
  ellipse(365,231,220,330,22,31);
  ellipse(365,232,220,330,22,31);
		//laddu
  ellipse(366,250,0,360,10,14);
  ellipse(366,251,0,360,10,14);
  ellipse(366,252,0,360,10,14);
  ellipse(366,253,0,360,10,14);
		//1st ear
  ellipse(192,130,545,260,40,51);
  ellipse(193,130,545,260,40,51);
  ellipse(194,130,545,260,40,51);
  ellipse(195,130,545,260,40,51);
  ellipse(114,130,350,380,40,51);
  ellipse(114,130,350,380,40,51);
		//2nd ear
  ellipse(250,130,290,360,40,51);
  ellipse(249,130,290,360,40,51);
  ellipse(248,130,290,360,40,51);
  ellipse(247,130,290,360,40,51);
  ellipse(326,120,160,210,40,30);
  ellipse(325,120,160,210,40,30);
		//trunk
  setcolor(i+1);
  ellipse(185,180,550,290,0,10);
  ellipse(225,200,160,290,40,30);
  ellipse(250,180,550,290,0,10);
  ellipse(285,173,200,280,40,30);
  ellipse(262,277,9,108,80,50);
  ellipse(270,250,6,90,80,50);
		//eyes
  ellipse(200,150,0,70,10,10);
  ellipse(240,150,98,180,10,10);
  settextstyle( 4 , 0 , 0 );
  outtextxy( 450 , 150 , "Ganpati" );
  outtextxy( 450 , 200 , "Bappa" );
  outtextxy( 450 , 250 , "Morya!!" );
  delay(300);
 }
 getch();
 closegraph();
}
