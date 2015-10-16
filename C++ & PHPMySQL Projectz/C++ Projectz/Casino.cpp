#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

using namespace std;

void draw_line(int n,char ch){ for(int i=0;i<n;i++) cout<<ch; }
void rules(){
     system("cls");
     std::cout<<"\n\n";
     draw_line(60,'_');
     std::cout<<"\n\n\t\t RULES OF THE GAME \n";
     draw_line(60,'_');
     std::cout<<"\n\n 1. Choose any number between 1 to 12"; 
     std::cout<<"\n 2. If you win you will get 10 times of money you bet"; 
     std::cout<<"\n 3. If you bet on wrong number you lose your betting amount \n\n";
     draw_line(60,'_');
     std::cout<<endl;
     }
     
     int main(){
         
         int depAmt,amt,no,dice;
         char playerName[12],ch;
         
         system("cls");
         draw_line(60,'_');
         std::cout<<"\n\n\n\n\t\t OUTLAWZ CASINO \n\n\n\n";
         draw_line(60,'_');
         std::cout<<"\n\n\n Enter Your Name : ";
         std::gets(playerName);
         std::cout<<"\n\n\ Enter Deposit amount to play game : ";
         std::cin>>depAmt;
         
         do {
             system("cls");
             rules();
             std::cout<<"\n\n\t Your current balance is UgShs. " <<depAmt;
             
             do {
                 std::cout<<"\n\n\t"<<playerName<<" Enter money to bet : ";
                 std::cin>>amt;
                 if(amt>depAmt)
                 std::cout<<" Your betting amount is more than your current balance \n\n Re-enter data \n";
                 else
                 break;
                 } while(1);
                 
                 do {
                     std::cout<<" Enter your lucky number to bet from 1 to 12 : ";
                     std::cin>>no;
                     
                     if(no<=0||no>12)
                     std::cout<<"Please check the number!! should be between 1 to 12 \n\n Re-enter data \n";
                     else
                     break;
                     } while(1);
                     
                     srand(time(0));
                     dice=rand()%12+1;
                     if(dice==no){
                                  std::cout<<"\n\n Good Luck!! You won UgShs. "<<amt*10;
                                  depAmt=depAmt+amt*10;
                                  }
                                  else {
                 std::cout<<"Bad Luck this time !! You lose UgShs. "<<amt;
                 depAmt=depAmt-amt;
                 }
                 std::cout<<"\n\n The winning number was : "<<dice;
                 std::cout<<"\n\n\t"<<playerName<<" You have UgShs. "<<depAmt<<endl;
                 std::cout<<"\n\n -->Do you want to play (y/n)? ";
                 cin>>ch;
                 } while(ch=='Y'||ch=='y');
                 system("cls");
                 std::cout<<"\n\n\n";
                 draw_line(70,'_');
                 std::cout<<"\n\n\t THANKS FOR COMIN' TO OUTLAWZ CASINO"; 
                 std::cout<<"\n\n\t YOUR BALANCE AMOUNT IS UgShs."<<depAmt <<"\n\n";
                 draw_line(70,'_');
                 std::cout<<"\n\n\t Game Programmer - Joshua Reminisce Bye...\n\n";
                 draw_line(70,'_');
                 getch();
                 }
