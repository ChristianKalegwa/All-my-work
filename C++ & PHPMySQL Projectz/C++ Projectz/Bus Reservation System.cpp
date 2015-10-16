#include <iostream>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

static int p=0;
class atrans{
char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
public:
void newBus();
void reservation();
void empty();
void show();
void available();
void position(int i);
}bus[5];//here we declare the number of buses we can have.
void vline(char ch){
for (int i=80;i>0;i--)//Here i's value will depend on your computer.
std::cout<<ch;
}
void atrans::newBus(){
system("cls");
cout<<"----------------------------------------------------------\n";
cout<<"\tADD NEW BUS \n";
cout<<"----------------------------------------------------------\n";
cout<<"Bus no: ";
cin>>bus[p].busn;
cout<<"\n Driver's name: ";
cin>>bus[p].driver;
cout<<"\n Departure Time: ";
cin>>bus[p].depart;
cout<<"\n Arrival Time: ";
cin>>bus[p].arrival;
cout<<"\n From: \t\t\t";
cin>>bus[p].from;
cout<<"\n To: \t\t\t";
cin>>bus[p].to;
bus[p].empty();
p++;
cout<<"\n----------------------------------------------------------";
cout<<"\n Bus no"<<bus[p].busn<<" has been successfully created: ";
cout<<"\n\n Press any key to continue ..."; getch(); system("cls");
}
void atrans::reservation(){
system("cls");
int seat;
char number[5];
top:
cout<<"Enter Bus no: ";
cin>>number;
int n;
for(n=0;n<=p;n++){
if(strcmp(bus[n].busn,number)==0)
break;
}
while(n<=p){
cout<<"\n Enter Seat number or Position : ";
cin>>seat;
if (seat>32)
{
cout<<"\n This bus has only 32 seats.";
}
else
{
if (strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)
{
cout<<"Enter Passanger's name: ";
cin>>bus[n].seat[seat/4][(seat%4)-1];
break;
}
else
cout<<"The seat reserved.\n";
}
}
if (n>p){
cout<<"Bus no incorrect ... please try again.\n";
goto top;
}
}
void atrans::empty(){
for(int i=0;i<8;i++){
for(int j=0;j<4;j++){
strcpy(bus[p].seat[i][j],"Empty");
}
}
}
void atrans::show(){
system("cls");
int n;
char number[5];
cout<<"Bus no: ";
cin>>number;
for(n=0;n<=p;n++){
if(strcmp(bus[n].busn,number)==0)
break;
}
while (n<=p){
vline('*');
cout<<"No: \t"<<bus[n].busn
<<"\n Driver: \t"<<bus[n].driver<<"\t\t Departure Time:\t"
<<bus[n].depart<<"\t Arrival Time:\t"<<bus[n].arrival
<<"\n From:\t Melaka Station\t"<<bus[n].from<<"\t\t To: \t\t\t"<<
bus[n].to<<"\n";
vline('*');
bus[0].position(n);
int a=1;
for (int i=0;i<8;i++){
for(int j=0;j<4;j++){
a++;
if(strcmp(bus[n].seat[i][j],"Empty")!=0)
cout<<"\n This seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<" .";
}
}break;
} if(n>p)
cout<<"Bus no is incorrect ... please try again.";
}
void atrans::position(int l){
int s=0,p=0;
for(int i=0;i<8;i++){
cout<<"\n";
for(int j=0;j<4;j++){
s++;
if(strcmp(bus[l].seat[i][j],"Empty")==0)
{
cout.width(5);
cout.fill(' ');
cout<<s<<".";
cout.width(10);
cout.fill(' ');
cout<<bus[l].seat[i][j];
p++;
}
else
{
cout.width(5);
cout.fill(' ');
cout<<s<<".";
cout.width(10);
cout.fill(' ');
cout<<bus[l].seat[i][j];
}
}
}
cout<<"\n\n  "<<p<<" seats are unreserved in Bus No: "<<bus[l].busn;
}
void atrans::available()
{
system("cls");

if(p == 0){
	cout<<"\nThere are no Buses available on the system ...\n";
}else{
for(int n=0;n<p;n++){
vline('*');
cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver<<"\t\tArrival time:\t"<<bus[n].arrival<<"\tDeparture Time: \t"<<bus[n].depart<<"\n From: \t\t"<<bus[n].from<<"\t\t To: \t\t\t"<<bus[n].to<<"\n";
vline('*');
vline('_');
}
}
cout<<"Press Enter key to return to the main menu : "; getch();system("cls");
}

void welcome();

int main()
{
system("cls");
system("cls");
int w;
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"d:\\tc\\bgi");//enter the path of ur c compiler where u installed it.
//setbkcolor(GREEN);

system("cls");

welcome();

while(1){
cout<<"\t\t------------------------------------------------------"<<endl;
cout<<"\t\t\tMAIN MENU";
cout<<"\n\t\t------------------------------------------------------"<<endl;

cout<<"\t\t\t 1.Add Bus\n\t\t\t 2.Reservation\n\t\t\t 3.Bus Reports \n\t\t\t 4.Available Buses . \n\t\t\t 5.End";
cout<<"\n\n\t\t\t Enter your option: ";
cin>>w;
switch(w){
case 1:
bus[p].newBus();
break;
case 2:
bus[p].reservation();
break;
case 3:
bus[0].show();
break;
case 4:
bus[0].available();
break;
case 5:
return 0;
}
}
}

void welcome(){
	start :
	char username [10] = "admin";
	char uname[10];
	char password[10] = "1234";
	char userpw[7];

	cout<<"\t------------------------------------------------------------------";
	cout<<"\n\t\t  WELCOME TO KALITA BUS RESERVATION SYSTEM";
	cout<<"\n\t------------------------------------------------------------------";
	cout<<"\n\n\t--------------AUTHENTICATION-------------------";
	a
	cout<<"\n\n\t\tUsername:  ";
	cin>>uname;
	cout<<"\n\t\tPassword:  ";
	cin>>userpw;

	//check whether username and password are valid
	if(strcmp(password,userpw) == 0 && strcmp(username,uname) ==0){
		 system("cls");
		 cout<<"";
	}
	else {
		system("cls");
		cout<<"\n\n\n\n\t----------------------------------------------------------";
		cout<<"\n\n\n\t\t\t\tSORRY!!!";
		cout<<"\n\n\t  YOU DONT HAVE PRIVILEGES TO ACCESS THIS SYSTEM......";
		cout<<"\n\n\n\n\t----------------------------------------------------------";
		cout<<"\n\n\t\tPress Enter to try again : ";  
        getch();
		system("cls");
		goto start;
	}
}
