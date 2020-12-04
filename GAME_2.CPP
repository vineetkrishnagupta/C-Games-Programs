/*
ABOUT THE PROGRAM AND PROGRAMAR:
THIS IS A GAME PRPGRAM.                                               
PROGRAMING LANGUAGE::C++.                                             
MAKEING BY " VINEET KRISHNA GUPTA ".                                  
IN THIS PROGRAM ARE THE USE GRAHICS AND HEADER FILR USE <GRAPHIC.H>.  
TOTAL LINE IN THIS PROGRAM:-"198".                                    

*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>	         
void graph(void);       // Fumtion to graphics.
void p1(void);          // Funtion to paly.
FILE *fp;               // FILE pointer.
int as2;                // To file time save scr
void main()
{
	int gd=0,gm;
	char ch ,c1[10];
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");       // Graphics mode.
	fp=fopen("game9.txt","r+");             // File name.
	if(fp==NULL)
	fp=fopen("game9.txt","w+");
	settextstyle(0,0,3);
	outtextxy(20,100,"New Game:N");        // Out text.
	outtextxy(20,150,"High score:H");
	ch=getch();
	if(ch=='h'||ch=='H')                  // Show high score.
	{	
		fscanf(fp,"%d",&as2);
		sprintf(c1,"%d",as2);
		outtextxy(20,200,"This is hg.score::>");
		outtextxy(500,200,c1);
		getch();
	}
	fscanf(fp,"%d",&as2);                // To the file.
	p1();                                // Funtion colling.
	fclose(fp);
}
void p1(void)
{
	int no=0;
	vin1:
	cleardevice();
	graph();                             // To graphics funtion colling.
	char ch,cs1[10],cs2[10];             // Varibals dic.
	int x1=70,y1=340,y2=390,l=40,r=90,b1=100;
	int c1=680,c2=300;
	int l1x1=680,l1y1=300,l1x2=680,l1y2=340;
	int l2x1=660,l2y1=306,l2x2=680,l2y2=320;

	sprintf(cs1,"%d",no);               // Type casting.
	sprintf(cs2,"%d",as2);
	outtextxy(580,5,cs2);              // Show to scr.
	outtextxy(580,29,cs1);
	outtextxy(10,400,"To the fair:M: or :o:");
	outtextxy(10,430,"To the push:x:");
	circle(70,300,6);
	floodfill(70,300,0);                // Show the palyer1.
	setlinestyle(0,0,3);
	line(70,300,70,340);
	line(68,306,80,320);
	line(80,320,90,306);
	line(68,306,100,306);
	while(1)                          // Main game programing.
	{
		if(kbhit())
		ch=getch();
		for(int i=0;i<40;i++)
		{
			delay(0);
			setcolor(0);
			line(x1,y1,l++,y2--);
			line(x1,y1,r--,y2++);
			setcolor(9);
			line(x1-2,y1-2,l-2,y2-2);
			line(x1-2,y1-2,r-2,y2-2);
		}
		for(i=0;i<40;i++)
		{
			delay(1);
			setcolor(0);
			line(x1,y1,l--,y2++);
			line(x1,y1,r++,y2--);
			setcolor(9);
			line(x1-2,y1-2,l-2,y2-2);
			line(x1-2,y1-2,r-2,y2-2);
		}
		if(ch=='x'||ch=='X')                 // To the push.
		{
			setcolor(0);
			settextstyle(0,0,2);
			outtextxy(10,10,"Enter the any key");
			ch=getch();
		}
		if(ch=='m'||ch=='M'||ch=='0')       // To the fair.
		{
			setcolor(0);
			line(68,306,b1+10,306);
			setcolor(9);
			line(68,306,b1,306);
			b1=b1+20;
		}
		if(ch=='q'||ch=='Q')                // To the quice.
		{
			if(as2<=no)
			{
				fclose(fp);
				fp=fopen("game9.txt","w+");   // life time save.
				as2=no;
				fprintf(fp,"%d",no);
			}

		break;
		}
		setcolor(0);
		line(68,306,100,306);
		if(c1<110&&b1==100)              // Palyer out.
		{
			vin2:
			outtextxy(0,200,"If you want to paly agane to plase ::Y");
			outtextxy(0,230,"If you want to quict to plase ::Q");
			ch=getch();
			if(ch=='y'||ch=='Y')
			{
				if(as2<=no)
				{
					fclose(fp);
					fp=fopen("game9.txt","w+");
					as2=no;
					fprintf(fp,"%d",no);
				}
				no=0;
				goto vin1;
			}
			else if(ch=='q'||ch=='Q')
			{
				if(as2<=no)
				{
					fclose(fp);
					fp=fopen("game9.txt","w+");
					as2=no;
					fprintf(fp,"%d",no);
				}
				break;
			}
			else goto vin2;
		}
		if(b1>=c1)
		{
			b1=100;
			ch=NULL;
			no++;
			if(as2<=no)
			as2=no;
			goto vin1;
		}
		// To the computer.
		circle(c1,c2,6);
		line(l1x1,l1y1,l1x2,l1y2);
		line(l2x1,l2y1,l2x2,l2y2);
		line(l1x2,l1y2,l1x1-30,l1y2+50);
		line(l1x2,l1y2,l1x1+30,l1y2+50);
		setcolor(9);
		line(l1x1+20,l1y1,l1x2+20,l1y2);
		line(l2x1+20,l2y1,l2x2+20,l2y2);
		line(l1x2+20,l1y2,l1x1-30+20,l1y2+50);
		line(l1x2+20,l1y2,l1x1+30+20,l1y2+50);
		circle(c1+20,c2,6);
		c1-=20;
		l1x1-=20,l1x2-=20;
		l2x1-=20,l2x2-=20;
	}
}
void graph(void)                  //To the graphics.
{
	int x=getmaxx();
	int y=getmaxy();
	setcolor(0);
	setlinestyle(1,0,3);
	setfillstyle(1,9);
	bar(0,0,x,y);
	setfillstyle(6,GREEN);
	bar(0,390,x,y);
	line(0,390,x,390);
	line(0,392,x,392);
	line(0,55,x,55);
	line(0,0,x,0);
	line(0,0,0,y);
	line(0,y,x,y);
	line(x,0,x,y);
	settextstyle(0,0,2);
	outtextxy(402,5,"Hi.scror:>");
	outtextxy(450,29,"Scror:>");
}
