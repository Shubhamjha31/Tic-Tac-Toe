#include <iostream>
#include<unistd.h>
using namespace std;
void clearscreen() {
  cout<<"\033[2J\033[1;1H";
}
int checkwin(char arr[], int &num) {
  // for player 1
  if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X') {
    cout << "Player 1 win" << endl;
    num=1;
    return num;
  } else if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X') {
    cout << "Player 1 win" << endl;
    num=1;
    return num;
  } else if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X') {
    cout << "Player 1 win" << endl;
    num=1;
    return num;
  } else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X') {
    cout << "Player 1 win" << endl;
    num=1;
    return num;
  } else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X') {
    cout << "Player 1 win" << endl;
    num=1;
    return num;
  } else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X') {
    cout << "Player 1 win" << endl;
    num=1;
    return num;
  } else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X') {
    cout << "Player 1 win" << endl;
    num=1;
    return num;
  } else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X') {
    cout << "Player 1 win" << endl;
    num=1;
    return num;
  }
  // For player 2
  else if (arr[0] == '0' && arr[1] == '0' && arr[2] == '0') {
    cout << "Player 2 win" << endl;
      num=2;
    return num;
  } else if (arr[0] == '0' && arr[4] == '0' && arr[8] == '0') {
    cout << "Player 2 win" << endl;
    num=2;
    return num;
  } else if (arr[0] == '0' && arr[3] == '0' && arr[6] == '0') {
    cout << "Player 2 win" << endl;
    num=2;
    return num;
  } else if (arr[1] == '0' && arr[4] == '0' && arr[7] == '0') {
    cout << "Player 2 win" << endl;
    num=2;
    return num;
  } else if (arr[2] == '0' && arr[4] == '0' && arr[6] == '0') {
    cout << "Player 2 win" << endl;
    num=2;
    return num;
  } else if (arr[2] == '0' && arr[5] == '0' && arr[8] == '0') {
    cout << "Player 2 win" << endl;
    num=2;
    return num;
  } else if (arr[3] == '0' && arr[4] == '0' && arr[5] == '0') {
    cout << "Player 2 win" << endl;
    num=2;
    return num;
  } else if (arr[6] == '0' && arr[7] == '0' && arr[8] == '0') {
    cout << "Player 2 win" << endl;
    num=2;
    return num;
  }
  //draw
  else if((arr[0]=='X'||arr[0]=='0')&&(arr[1]=='X'||arr[1]=='0')&&(arr[2]=='X'||arr[2]=='0')&&(arr[3]=='X'||arr[3]=='0')&&(arr[4]=='X'||arr[4]=='0')&&(arr[5]=='X'||arr[5]=='0')&&(arr[6]=='X'||arr[6]=='0')&&(arr[7]=='X'||arr[7]=='0')&&(arr[8]=='X'||arr[8]=='0')){
    cout<<"Game draw"<<endl;
    num=3;
    return num;
  }
  return 0;
}
void firstplayer(char arr[], int &pos) {
  cout << "player 1 = X       Player 2 = 0      10 = Exit the game" << endl;
  cout << "\t \t|\t \t|" << endl;
  cout << "\t" << arr[0] << "\t|\t" << arr[1] << "\t|\t" << arr[2] << endl;
  cout << "\t__________________" << endl;
  cout << "\t \t|\t \t|" << endl;
  cout << "\t" << arr[3] << "\t|\t" << arr[4] << "\t|\t" << arr[5] << endl;
   cout << "\t__________________" << endl;
  cout << "\t \t|\t \t|" << endl;
  cout << "\t" << arr[6] << "\t|\t" << arr[7] << "\t|\t" << arr[8] << endl;
  cout << "1st Player turn, Enter your position you want to insert X" << endl;
  cin >> pos;
  if(pos>=10){
    cout<<"Player 1 exit"<<endl;
  }
  arr[pos - 1] = 'X';
  sleep(1);
  clearscreen();
}
void secondplayer(char arr[], int &pos) {
  cout << "player 1 = X       Player 2 = 0      10 = Exit the game" << endl;
  cout << "\t \t|\t \t|" << endl;
  cout << "\t" << arr[0] << "\t|\t" << arr[1] << "\t|\t" << arr[2] << endl;
  cout << "\t__________________" << endl;
  cout << "\t \t|\t \t|" << endl;
  cout << "\t" << arr[3] << "\t|\t" << arr[4] << "\t|\t" << arr[5] << endl;
   cout << "\t__________________" << endl;
  cout << "\t \t|\t \t|" << endl;
  cout << "\t" << arr[6] << "\t|\t" << arr[7] << "\t|\t" << arr[8] << endl;
  cout << "2nd Player turn, Enter your position you want to insert 0" << endl;
  cin >> pos;
  if(pos>=10){
    cout<<"Player 2 exit"<<endl;
  }
  arr[pos - 1] = '0';
  sleep(1);
  clearscreen();
}

int main() {
  char arr[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int pos; //to store position that player want to insert
  int num=0;//to check if game is draw or not
  do {
    firstplayer(arr, pos);
    if (checkwin(arr, num) == 1 ) {
      break;
    }
    if(checkwin(arr, num)==17){
      break;
    }
    secondplayer(arr, pos);
    if (checkwin(arr, num) == 2) {
      break;
    }
    if(checkwin(arr, num)==3){
      break;
    }
  } while (pos < 10);
  return 0;
  
}
