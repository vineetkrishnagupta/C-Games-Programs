         /*
		 ABOUT THE PROGRAM AND PROGRAMAR:
		 THIS IS A GAME PRPGRAM.                                               
		 PROGRAMING LANGUAGE::C++.                                             
		 MAKEING BY " VINEET KRISHNA GUPTA ".                                  
		 IN THIS PROGRAM  USE GRAHICS AND HEADER FILR USE <GRAPHIC.H>.  
		 TOTAL LINE IN THIS PROGRAM:-"164". 
         */                                        
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
void main()       // MAIN()  FUNTION.
{
	vin1:
	int gm=0,gd,i=0,y=300,x1=480,x2=500,x=80,no=0;
	char ch='\0',scr[10],agn='\0';
	initgraph(&gm,&gd,"c:\\turboc3\\bgi");  // GRAPHICS MOOD.
	srand(time(NULL));
	setcolor(rand()%16);        // RAND NO GENERATED,BY RAND() FUNTION.
	line(0,0,637,0);                // DRAW LINES WHITH LINE() FUNTION.
	line(0,0,0,479);
	line(637,0,637,479);
	line(0,479,637,479);

	settextstyle(3,0,1);                        // SET TEXT STYLE.
	outtextxy(10,420,"IF YOU WHANT POUSE TO PRESS : : \"X\"OR\"1\"\n");
	outtextxy(10,450,"IF YOU WANT TO QUIT TO PRESS : : \"Q\"OR\"3\"\n");
	outtextxy(10,50,"IF YOU WANT TO JUMP TO THE PRESS : : \"T\"OR\"0\"\n");

	while(1)                                         // IMP.PART IN PROGRAM.
	{
		sprintf(&scr[0],"%d",no);
		settextstyle(0,0,2);
		setcolor(2);                    // SET COLOR.

		line(0,0,637,0);          // DRAW LINES WHITH LINE() FUNTION.
		line(0,0,0,479);
		line(637,0,637,479);
		line(0,479,637,479);

		outtextxy(400,10,"SCORE:-");

		outtextxy(520,10,scr);
		delay(1);
		setfillstyle(1,9);
		bar(x1,220,x2,303);
		setcolor(10);
		line(0,306,800,306);
		fillellipse(x,y,6,6);
		if(kbhit())                                              // INPUT THE ANY KEY.
		ch=getch();                                          // STORE THE KEY.
		if(ch=='x'||ch=='X'||ch=='1')
		{
			setcolor(rand()%16);
			outtextxy(10,380,"PRESS THE ANY KEY TO PALY::");
			getch();
			setcolor(0);
			outtextxy(10,380,"PRESS THE ANY KEY TO PALY::");
			setcolor(10);
		}


		if(ch=='q'||ch=='Q'||ch=='3')
		break;

		if(ch=='t'||ch=='T'||ch=='0'||ch==72)
		for(i=0;i<110;i++)        // FOR LOOP.
		{
			line(0,0,637,0);         // DRAW LINES WHITH LINE() FUNTION.
			line(0,0,0,479);
			line(637,0,637,479);
			line(0,479,637,479);

			delay(2);
			line(0,304,800,304);
			setfillstyle(1,9);
			bar(x1,220,x2,303);
			fillellipse(x,y,6,6);
			setcolor(0);
			circle(x,y+1,6);
			setcolor(15);
			setfillstyle(1,0);
			bar(x1+20,220,x2+20,303);
			setfillstyle(1,15);

			if(y>=220&&y<=303)              // TO THE OUT.
			{
				if(x>=x1&&x<=x2)
				{
					srand(time(NULL));
					setcolor(rand()%16);
					outtextxy(10,380,"IF YOU WANT TO PALY TO PRESS::\"A\"OR\"2\"\n");
					agn= getch();
					if(agn=='a'||agn=='A'||agn=='2')
					goto vin1;                                               // GOTO TOP.
				}
			}
			y--,x1--,x2--;
		}                                                               // END THE FOR LOOP.
		if(i==110)
		for(i=0;i<110;i++)               // FOR LOOP.
		{
			line(0,0,637,0);  // DRAW LINES WHITH LINE() FUNTION.
			line(0,0,0,479);
			line(637,0,637,479);
			line(0,479,637,479);

			delay(2);
			line(0,304,800,304);
			setfillstyle(1,9);
			bar(x1,220,x2,303);
			fillellipse(x,y,6,6);
			setcolor(0);
			circle(x,y-1,6);
			setcolor(15);
			setfillstyle(1,0);
			bar(x1+20,220,x2+20,303);
			setfillstyle(1,15);
			if(y>=220&&y<=303)       // TO THE OUT.
			{
				if(x>=x1&&x<=x2)
				{
					srand(time(NULL));
					setcolor(rand()%16);
					outtextxy(10,400,"If you want to paly to Plase::\"A\"OR\"2\"\n");
					agn= getch();
					if(agn=='a'||agn=='A'||agn=='2')
					goto vin1;
				}
			}
			y++,x1--,x2--;
		}	       //  END THE FOR LOOP.

		i=0;          // TO THE UNLIMITED DONT PLASE KEY COODING.
		ch=NULL;
		setfillstyle(1,0);
		bar(x1+20,220,x2+20,303);
		if(y>=220&&y<=303)
		{
			if(x>=x1&&x<=x2)
			{
				srand(time(NULL));
				setcolor(rand()%16);
				outtextxy(10,400,"If you want to paly to Plase::\"A\"OR\"2\"\n");
				agn= getch();
				if(agn=='a'||agn=='A'||agn=='2')
				goto vin1;                                               // GOTO TOP.
			}
		}
		x1--,x2--;
		if(x1<=0)
		{
			x1=600,x2=620;
			no++;
			cleardevice();        // CLEAR THE GRAPHICS.
		}
	}
	closegraph();
}
// END THE GAME PROHRAM.
