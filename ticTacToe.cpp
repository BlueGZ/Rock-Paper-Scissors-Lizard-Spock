//222.3405.2327x204
#include<iostream>
#include <conio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
class tic
{
  char chce[3][3],choice;
  string p1,p2;
  int u1,u2,move1,move2,count=0,i,j;
public:
  void dispm()
  {
    cout<<"Hey!"<<endl;
    getch();
    cout<<"How bout' a Game of Tic Tac Toe?"<<endl;
    getch();
    cout<<"Before We Start...."<<endl;
    getch();
    cout<<"This Game Was Pretty Hard To Make"<<endl;
    getch();
    cout<<"So Please Show Some Appreciation..OK"<<endl;
    getch();
    cout<<"Now,Rules Are Pretty Simple"<<endl;
    cout<<"Firstly, You Should Know How To Play Tic Tac Toe"<<endl;
    getch();
    cout<<"You Do, Right? Coz Only Then Can We Continue(Y/N)"<<endl;
    cin>>choice;
    choice=toupper(choice);
    if (choice=='Y'){
      cout<<"Thank God..So It Goes Like This"<<endl;
      getch();
        cout<<endl;
        cout<<endl;
        cout<<"           1 | 2 | 3"<<endl;
        cout<<"          -----------"<<endl;
        cout<<"           4 | 5 | 6"<<endl;
        cout<<"          -----------"<<endl;
        cout<<"           7 | 8 | 9"<<endl;
        getch();
        for (i=0;i<3;i++) {
          for (j=0;j<3;j++){
            chce[i][j]=' ' ;
          }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Just Keep Picking A Number(Only 1 to 9) To Mark Your Position Until Someone Wins,Or The Game Ends In A Draw,";
        getch();
        cout<<" Or The Computer Crashes,";
        getch();
        cout<<" Or The World Ends"<<endl;
        getch();
        cout<<endl;
        cout<<endl;
        cout<<"So Let's Start The Game"<<endl;
        dism();
        cout<<endl;
        cout<<endl;
        cout<<"The First One To Enter Will Get X"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Choose A Character"<<endl;
        cout<<"1) Oliver"<<endl;
        cout<<"2) Freddie"<<endl;
        cout<<"3) Scarlett"<<endl;
        cout<<"4) Lucy"<<endl;
        cout<<"5) Create Your Own Character"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Player 1 Choose"<<endl;
        try1:
        cin>>u1;
        if (u1==1){
          p1="Oliver";
        }
        else if (u1==2){
          p1="Freddie";
        }
        else if (u1==3){
          p1="Scarlett";
        }
        else if (u1==4){
          p1="Lucy";
        }
        else if (u1==5){
          cout<<"Enter Your Character Name"<<endl;
          cin>>p1;
          u1=0;
        }
        else{
          cout<<"Invalid Choice Enter Again"<<endl;
          goto try1;
        }
        cout<<"Player 2 Choose"<<endl;
        try2:
        cin>>u2;
        if (u2!=u1){
          if (u2==1){
            p2="Oliver";
          }
          else if (u2==2){
            p2="Freddie";
          }
          else if (u2==3){
            p2="Scarlett";
          }
          else if (u2==4){
            p2="Lucy";
          }
          else if (u2==5){
            cout<<"Enter Your Character Name"<<endl;
            cin>>p2;
          }
          else {
            cout<<"Invalid Choice Enter Again"<<endl;
            goto try2;
          }
        }
        else{
          cout<<"Already Taken....Choose Another"<<endl;
          goto try2;
        }
        while (count!=1){
          try3:
          dism();
          check();
          cout<<endl;
          cout<<endl;
          if (count!=1){
          cout<<p1<<"  Play Your Move"<<endl;
          cin>>move1;
        }
          if ((move1<=3)&&(count!=1)){
            move1=move1-1;
            if ((chce[0][move1]!='X')&&(chce[0][move1]!='O')){
              chce[0][move1]='X';
            }
            else{
              cout<<"Already Full"<<endl;
              goto try3;
            }
          }
          else if ((move1>3)&&(move1<=6)&&(count!=1)){
            move1=((move1%3)+2)%3;
            if ((chce[1][move1]!='X')&&(chce[1][move1]!='O')){
              chce[1][move1]='X';
            }
            else{
              cout<<"Already Full"<<endl;
              goto try3;
            }
          }
          else if ((move1>6)&&(move1<=9)&&(count!=1)){
            move1=((move1%3)+2)%3;
            if ((chce[2][move1]!='X')&&(chce[2][move1]!='O')){
              chce[2][move1]='X';
            }
            else{
              cout<<"Already Full"<<endl;
              goto try3;
            }
          }
          else if (count!=1){
            cout<<"Wrong Move"<<endl;
            cout<<endl;
            cout<<"Let's Refresh Your Memory"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"           1 | 2 | 3"<<endl;
            cout<<"          -----------"<<endl;
            cout<<"           4 | 5 | 6"<<endl;
            cout<<"          -----------"<<endl;
            cout<<"           7 | 8 | 9"<<endl;
            getch();
            goto try3;
          }

          try4:
          dism();
          check();
          cout<<endl;
          cout<<endl;
          if (count!=1){
          cout<<p2<<"  Play Your Move"<<endl;
          cin>>move2;
        }
          if ((move2<=3)&&(count!=1)){
            move2=move2-1;
            if ((chce[0][move2]!='X')&&(chce[0][move2]!='O')){
              chce[0][move2]='O';
            }
            else{
              cout<<"Already Full"<<endl;
              goto try4;
            }
          }
          else if ((move2>3)&&(move2<=6)&&(count!=1)){
            move2=((move2%3)+2)%3;
            if ((chce[1][move2]!='X')&&(chce[1][move2]!='O')){
              chce[1][move2]='O';
            }
            else{
              cout<<"Already Full"<<endl;
              goto try4;
            }
          }
          else if ((move2>6)&&(move2<=9)&&(count!=1)){
            move2=((move2%3)+2)%3;
            if ((chce[2][move2]!='X')&&(chce[2][move2]!='O')){
              chce[2][move2]='O';
            }
            else{
              cout<<"Already Full"<<endl;
              goto try4;
            }
          }
          else if (count!=1){
            cout<<"Wrong Move"<<endl;
            cout<<endl;
            cout<<"Let's Refresh Your Memory"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"           1 | 2 | 3"<<endl;
            cout<<"          -----------"<<endl;
            cout<<"           4 | 5 | 6"<<endl;
            cout<<"          -----------"<<endl;
            cout<<"           7 | 8 | 9"<<endl;
            getch();
            goto try4;
          }
        }
   }
     else{
       cout<<"Please Learn The Rules And Come Back"<<endl;
     }
  }
  void check(){
    if (count!=1){
    if (((chce[0][0]==chce[0][1])&&(chce[0][1]==chce[0][2])&&(chce[0][2]=='X'))||((chce[1][0]==chce[1][1])&&(chce[1][1]==chce[1][2])&&(chce[1][2]=='X'))||((chce[2][0]==chce[2][1])&&(chce[2][1]==chce[2][2])&&(chce[2][2]=='X')))
      {
        count=1;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            for(int k=1;k<25;k++){
              system("color 1F");system("color F1");
            }
            cout<<p1<<" WINS"<<endl;
          }
    else if (((chce[0][0]==chce[0][1])&&(chce[0][1]==chce[0][2])&&(chce[0][2]=='O'))||((chce[1][0]==chce[1][1])&&(chce[1][1]==chce[1][2])&&(chce[1][2]=='O'))||((chce[2][0]==chce[2][1])&&(chce[2][1]==chce[2][2])&&(chce[2][2]=='O'))){
      count=1;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            for(int k=1;k<25;k++){
              system("color 4F");system("color F4");
            }
            cout<<p2<<" WINS"<<endl;
        }
    else if(((chce[0][0]==chce[1][0])&&(chce[1][0]==chce[2][0])&&(chce[2][0]=='X'))||((chce[0][1]==chce[1][1])&&(chce[1][1]==chce[2][1])&&(chce[2][1]=='X'))||((chce[0][2]==chce[1][2])&&(chce[1][2]==chce[2][2])&&(chce[2][2]=='X')))
      {
        count=1;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            for(int k=1;k<25;k++){
              system("color 1F");system("color F1");
            }
            cout<<p1<<" WINS"<<endl;
        }
    else if(((chce[0][0]==chce[1][0])&&(chce[1][0]==chce[2][0])&&(chce[2][0]=='O'))||((chce[0][1]==chce[1][1])&&(chce[1][1]==chce[2][1])&&(chce[2][1]=='O'))||((chce[0][2]==chce[1][2])&&(chce[1][2]==chce[2][2])&&(chce[2][2]=='O'))){
      count=1;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            for(int k=1;k<25;k++){
              system("color 4F");system("color F4");
            }
            cout<<p2<<" WINS"<<endl;
        }
     else if(((chce[0][0]==chce[1][1])&&(chce[1][1]==chce[2][2])&&(chce[2][2]=='X'))||((chce[0][2]==chce[1][1])&&(chce[1][1]==chce[2][0])&&(chce[2][0]=='X')))
      {
        count=1;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            for(int k=1;k<25;k++){
              system("color 1F");system("color F1");
            }
            cout<<p1<<" WINS"<<endl;
        }
     else if(((chce[0][0]==chce[1][1])&&(chce[1][1]==chce[2][2])&&(chce[2][2]=='O'))||((chce[0][2]==chce[1][1])&&(chce[1][1]==chce[2][0])&&(chce[2][0]=='O'))){
       count=1;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            for(int k=1;k<25;k++){
              system("color 4F");system("color F4");
            }
            cout<<p2<<" WINS"<<endl;
        }
      }
      int a=0;
      for (i=0;i<3;i++) {
        for (j=0;j<3;j++){
          if ((chce[i][j]=='X')||(chce[i][j]=='O')){
            a=a+1;
          }
        }
      }
      if ((a==9)&&(count!=1)){
        cout<<"Sorry The Game Was A Draw...Try Again Later"<<endl;
        count=1;
      }
  }
  void dism(){
    cout<<endl;
    cout<<"           "<<chce[0][0]<<" | "<<chce[0][1]<<" | "<<chce[0][2]<<endl;
    cout<<"          -----------"<<endl;
    cout<<"           "<<chce[1][0]<<" | "<<chce[1][1]<<" | "<<chce[1][2]<<endl;
    cout<<"          -----------"<<endl;
    cout<<"           "<<chce[2][0]<<" | "<<chce[2][1]<<" | "<<chce[2][2]<<endl;
    getch();
  }
};
int main()
{
  system("color F0");
  tic strt;
  strt.dispm();
  getch();
  return 0;
}
