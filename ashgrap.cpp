#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
using namespace std;

main()
{
    int gd = DETECT, gm;
    int h1,h2;
    int  x=0,x1=200,x2=400,x3,x4,x5,x6;
    cout<<"enter the height of sun from earth:";
    cin>>h1;
    cout<<"enter the height of plate from earth:";
    cin>>h2;
    initgraph(&gd, &gm, "asdf");
    while(1)
    {
        setbkcolor(3);
        x1=200;
        x2=400;
        x=0;
        for(int i=0 ;i<80;i++)
        {
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);
            circle(650,600-h1,75);
            floodfill(600,600-h1,YELLOW);
            line(x1,600-h2,x2,600-h2);
            setcolor(BLUE);
            line(250+x,600-h2,350+x,600-h2);
            setcolor(BLACK);
            x3=650-((h1/h2)*(650-x1));
            x4=650-((h1/h2)*(650-x2));
            line(x3,600,x4,600);
            x5=650-((h1/h2)*(650-(250+x)));
            x6=650-((h1/h2)*(650-(350+x)));
            setcolor(YELLOW);
            line(x5,600,x6,600);
             setcolor(RED);
        settextstyle(TRIPLEX_FONT,HORIZ_DIR,2.5);

	        outtextxy(0,50,"SHADOW.");
	        settextstyle(int font,int  HORIZ_DIR, 1.5);
	         outtextxy(1150,650,"by Ashish varshney");
            setcolor(YELLOW);
            line(650,600-h1,x3,600);
            line(650,600-h1,x4,600);
            x1=x1+10;
            x2=x2+10;
            x=x+10;
            delay(100);
            cleardevice();
              int l=rand()%getmaxx();
        int k=rand()%getmaxy();
        putpixel(l,k,WHITE);
        delay(500);
        setcolor(RED);
        settextstyle(TRIPLEX_FONT,HORIZ_DIR,2.5);

	        outtextxy(0,50,"SHADOW.");
	        settextstyle(int font,int  HORIZ_DIR, 1.5);
	         outtextxy(1150,650,"by Ashish varshney");
        }
     
    }
    getch();
    closegraph();
    return 0;
}
