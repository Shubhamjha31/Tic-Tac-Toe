#include<iostream>
using namespace std;
void checktie(char arr[]){
  
}
int checkwin(char arr[]){
  //for player 1
  if(arr[0]=='X'&&arr[1]=='X'&&arr[2]=='X'){
    cout<<"Player 1 win"<<endl;
    return 1;
  }
  else if(arr[0]=='X'&&arr[3]=='X'&&arr[6]=='X'){
    cout<<"Player 1 win"<<endl;
    return 2;
  }
  else if(arr[0]=='X'&&arr[4]=='X'&&arr[5]=='X'){
    cout<<"Player 1 win"<<endl;
    return 3;
  }
  else if(arr[1]=='X'&&arr[4]=='X'&&arr[5]=='X'){
    cout<<"Player 1 win"<<endl;
    return 4;
  }
  else if(arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X'){
    cout<<"Player 1 win"<<endl;
    return 5;
  }
  else if(arr[2]=='X'&&arr[4]=='X'&&arr[6]=='X'){
    cout<<"Player 1 win"<<endl;
    return 6;
  }
  else if(arr[3]=='X'&&arr[4]=='X'&&arr[5]=='X'){
    cout<<"Player 1 win"<<endl;
    return 7;
  }
  else if(arr[6]=='X'&&arr[7]=='X'&&arr[8]=='X'){
    cout<<"Player 1 win"<<endl;
    return 8;
  }
  // For player 2
  else if(arr[0]=='0'&&arr[1]=='0'&&arr[2]=='0'){
    cout<<"Player 2 win"<<endl;
    return 9;
  }
  else if(arr[0]=='0'&&arr[3]=='0'&&arr[6]=='0'){
    cout<<"Player 2 win"<<endl;
    return 10;
  }
  else if(arr[0]=='0'&&arr[4]=='0'&&arr[5]=='0'){
    cout<<"Player 2 win"<<endl;
    return 11;
  }
  else if(arr[1]=='0'&&arr[4]=='0'&&arr[5]=='0'){
    cout<<"Player 2 win"<<endl;
    return 12;
  }
  else if(arr[2]=='0'&&arr[5]=='0'&&arr[8]=='0'){
    cout<<"Player 2 win"<<endl;
    return 13;
  }
  else if(arr[2]=='0'&&arr[4]=='0'&&arr[6]=='0'){
    cout<<"Player 2 win"<<endl;
    return 14;
  }
  else if(arr[3]=='0'&&arr[4]=='0'&&arr[5]=='0'){
    cout<<"Player 2 win"<<endl;
    return 15;
  }
  else if(arr[6]=='0'&&arr[7]=='0'&&arr[8]=='0'){
    cout<<"Player 2 win"<<endl;
    return 16;
  }
 
}
void firstplayer(char arr[],int &pos){
 cout<<"player 1 = X       Player 2 = 0      10 = Exit the game"<<endl;
 cout<<"\t \t|\t \t|"<<endl;
 cout<<"\t"<<arr[0]<<"\t|\t"<<arr[1]<<"\t|\t"<<arr[2]<<endl;
 cout<<"\t_________________________________"<<endl;
 cout<<"\t \t|\t \t|"<<endl;
 cout<<"\t"<<arr[3]<<"\t|\t"<<arr[4]<<"\t|\t"<<arr[5]<<endl;
 cout<<"\t_________________________________"<<endl;
 cout<<"\t \t|\t \t|"<<endl;
 cout<<"\t"<<arr[6]<<"\t|\t"<<arr[7]<<"\t|\t"<<arr[8]<<endl;
 cout<<"1st Player turn, Enter your position you want to insert X"<<endl;
 cin>>pos;
 arr[pos-1]='X';

}
void secondplayer(char arr[],int &pos){
 cout<<"player 1 = X       Player 2 = 0      10 = Exit the game"<<endl;
 cout<<"\t \t|\t \t|"<<endl;
 cout<<"\t"<<arr[0]<<"\t|\t"<<arr[1]<<"\t|\t"<<arr[2]<<endl;
 cout<<"\t_________________________________"<<endl;
 cout<<"\t \t|\t \t|"<<endl;
 cout<<"\t"<<arr[3]<<"\t|\t"<<arr[4]<<"\t|\t"<<arr[5]<<endl;
 cout<<"\t_________________________________"<<endl;
 cout<<"\t \t|\t \t|"<<endl;
 cout<<"\t"<<arr[6]<<"\t|\t"<<arr[7]<<"\t|\t"<<arr[8]<<endl;
 cout<<"2nd Player turn, Enter your position you want to insert 0"<<endl;
 cin>>pos;
 arr[pos-1]='0';

}

int main() {
  char arr[]={'1','2','3','4','5','6','7','8','9'};
  int pos;
  do{
   firstplayer(arr,pos);
   if(checkwin(arr)==1||checkwin(arr)==2||checkwin(arr)==3||checkwin(arr)==4||checkwin(arr)==5||checkwin(arr)==6||checkwin(arr)==7||checkwin(arr)==8)
   {
    break;
   }
   secondplayer(arr,pos);
   if(checkwin(arr)==9||checkwin(arr)==10||checkwin(arr)==11||checkwin(arr)==12||checkwin(arr)==13||checkwin(arr)==14||checkwin(arr)==15||checkwin(arr)==16)
   {
    break;
   }
  }while(pos<10);
  return 0;
}