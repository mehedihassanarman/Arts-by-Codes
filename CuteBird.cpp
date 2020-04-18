#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
using namespace std;
int main() {
int gd = DETECT, gm;

initgraph(&gd, &gm, "C:\\TC\\BGI");
setlinestyle(0,1,2);
outtext("DRAWING OBJECTS");
//line(330,100, 330,400);

//BODY
delay(1500);
line(220,400, 440,400);
delay(1500);
arc(220,330, 180, 270, 70); //LEFT SIDE
delay(1500);
arc(420,330, 107, 180, 270);//LEFT SIDE
delay(1500);
arc(440,330, 270, 360, 70);//RIGHT SIDE
delay(1500);
arc(240,330, 0, 73, 270);//RIGHT SIDE
delay(1500);


//LEFT EYE OUTER SIDE
arc(275,200, 168, 320, 50);
delay(1500);
arc(230,200, 340,410, 90);
delay(1500);
arc(305,230, 95,152, 90);
delay(1500);
arc(249,170, 270,310, 90);
delay(1500);

//LEFT EYE INNER SIDE
arc(295,210, 0, 360, 25);
delay(1500);
pieslice(299, 208, 0, 360, 15);
pieslice(295, 213, 0, 360, 15);
delay(1500);
circle(285,198,5);
delay(1500);

//RIGHT EYE OUTER SIDE
arc(385,200, 220, 372, 50);
delay(1500);
arc(430,200, 130,200, 90);
delay(1500);
arc(355,230, 27,85, 90);
delay(1500);
arc(410,170, 225, 270, 90);
delay(1500);

//RIGHT EYE INNER SIDE
arc(365,210, 0, 360, 25);
delay(1500);
pieslice(369, 208, 0, 360, 15);
pieslice(365, 213, 0, 360, 15);
delay(1500);
circle(355,198,5);
delay(1500);

//BEAK
int points[]={330,240,323,250,337,250,330,240};
fillpoly(4, points);
delay(1500);
line(327,254, 333,254);
delay(1500);
arc(330,244, 240, 300, 15);
delay(1500);

//LEFT WINGS
arc(180,300, 110, 235, 50);
delay(1500);

//RIGHT WINGS
arc(480,300, 305, 430, 50);
delay(1500);

//HAIR
arc(380,70, 150, 200, 50);
delay(1500);
arc(375,100, 125, 170, 50);
delay(1500);

//LEFT LEG
arc(200,416, 90, 180, 20);
arc(180,398, 270, 360, 20);
delay(1500);
arc(193,400, 270, 360, 15);
delay(1500);
arc(212,390, 247, 310, 15);
delay(1500);

//RIGHT LEG
arc(458,416, 0, 90, 20);
arc(478,398, 180, 270, 20);
delay(1500);
arc(465,400, 180, 270, 15);
delay(1500);
arc(450,392, 220, 280, 15);
delay(1500);

//LOWER PORTION
int baseline[]={100,425,200,470,470,470,570,425,100,425};
setfillstyle( LTBKSLASH_FILL, WHITE);
setcolor(BLACK);
fillpoly(5, baseline);


getch();
closegraph();
return 0;

}
