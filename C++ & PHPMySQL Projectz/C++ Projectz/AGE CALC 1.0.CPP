#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//////////////globale verible///////////////
int i,j,d,m,y,d1,m1,y1;
//////////////////function prottype/////////
char nm[20];
void manu();
void input();
void calc();
void enter();
void call();
//////////////////main/////////////////////
void main()
{

	call();

}
void call()
{
	clrscr();
	enter();
	clrscr();
	manu();
	input();
	calc();
	come:
gotoxy(25,17);
textcolor(YELLOW);
cprintf("Do You Want to Exit Now ?Y/N :");
char ch=toupper(getch());
switch(ch)
{
case 'Y':
	{
		clrscr();
		gotoxy(36,9);
		textcolor(GREEN+BLINK);
		cprintf("Thank You");
		gotoxy(39,10);
		cprintf("By");
		gotoxy(35,11);
		textcolor(WHITE);
		cprintf("Joshua Reminisce");
		textcolor(RED);
		gotoxy(33,12);
		cprintf("Please Wait....");
		delay(1000);
		exit(0);
	}
case 'N':
	{
		clrscr();
		call();
	}
default:
	gotoxy(25,18);
	cout<<"Enter Velid Option(Y/N)";
	goto come;

}
}
void enter()
{
	gotoxy(25,12);
	cout<<"Enter Your Name:";
	gotoxy(42,12);
	cin>>nm;
}
void manu()
{
  gotoxy(10,1);
  cprintf("%c",218);
  gotoxy(70,1);
  cprintf("%c",191);
  gotoxy(10,21);
  cprintf("%c",192);
  gotoxy(70,21);
  cprintf("%c",217);
  gotoxy(10,3);
  cprintf("%c",192);
  gotoxy(70,3);
  cprintf("%c",217);
  for(i=1;i<=59;i++)
  {
	gotoxy(10+i,1);
	cprintf("%c",196);
  }
   for(i=1;i<=59;i++)
  {
	gotoxy(10+i,3);
	cprintf("%c",196);
  }
    for(i=1;i<=19;i++)
  {
	gotoxy(10,1+i);
	cprintf("%c",179);
  }
  for(i=1;i<=19;i++)
  {
	gotoxy(70,1+i);
	cprintf("%c",179);
  }
  for(i=1;i<=59;i++)
  {
	gotoxy(10+i,21);
	cprintf("%c",220);
  }
    for(i=1;i<=59;i++)
  {
	gotoxy(10+i,8);
	cprintf("%c",196);
  }
  for(i=1;i<=59;i++)
  {
	gotoxy(10+i,10);
	cprintf("%c",196);
  }

  for(i=1;i<=59;i++)
  {
	textcolor(RED);
	gotoxy(10+i,12);
	cprintf("%c",196);
  }
   for(i=1;i<=59;i++)
  {
	textcolor(LIGHTBLUE);
	gotoxy(10+i,16);
	cprintf("%c",196);
  }
  for(i=1;i<=3;i++)
  {
	gotoxy(28,12+i);
	cprintf("%c",179);
  }
  for(i=1;i<=3;i++)
  {
	gotoxy(40,12+i);
	cprintf("%c",179);
  }
  for(i=1;i<=3;i++)
  {
	gotoxy(52,12+i);
	cprintf("%c",179);
  }
  delay(300);
  gotoxy(37,9);
	textcolor(RED);
	cout<<"RESULT";
  textcolor(WHITE);
	gotoxy(12,11);
	cprintf("Name");
	gotoxy(43,11);
	cprintf("Age");
	gotoxy(34,13);
	cprintf("Year");
	gotoxy(45,13);
	cprintf("Month");
	gotoxy(56,13);
	cprintf("Days");
	gotoxy(57,20);
  textcolor(BLINK+GREEN);
  cprintf("By Joshua Reminisce");
  gotoxy(30,2);
  textcolor(WHITE);
  cprintf("AGE CALCULATE SYSTEM");

}
void input()
{
	gotoxy(11,4);
	cout<<"Enter Your D.O.B.(Ex.2 7 1992)   :";
	gotoxy(11,5);
	cout<<"Enter Current Date(Ex.28 9 2012) :";
	gotoxy(45,4);
	cin>>d>>m>>y;
	gotoxy(45,5);
	cin>>d1>>m1>>y1;
}
void calc()
{
	int rd,rm,ry,tm,td,t;
	rd=d1-d;
	rm=m1-m;
	ry=y1-y;
	delay(300);
	gotoxy(12,13);
	cout<<nm;
	gotoxy(32,13);
	cout<<ry;
	gotoxy(43,13);
	cout<<rm;
	gotoxy(54,13);
	cout<<rd;
}

