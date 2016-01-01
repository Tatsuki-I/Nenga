#include <iostream>
#include <random>
#include <string>
using namespace std;
void mikuji(int a);
int main(){
  random_device rd;
  int temp = 0;
  cout << "Selamat Tahun Baru!!!" << endl;
  cout << "Happy New Year!!!" << endl;
  cout << "\n" << endl;
  cout << "Press any number." << endl;
  cout << "You can get your fortune by my Omikuji." << endl;
  cin >> temp;
  int RandomInt = rd();
  RandomInt *= temp;
  mikuji(temp);
  return 0;
}
void mikuji(int a){
  string res;
  switch (a%9) {
    case 0:
      res = "大吉";
      break;
    case 1:
      res = "中吉";
      break;
    case 2:
      res = "小吉";
      break;
    case 3:
      res = "吉";
      break;
    case 4:
      res = "半吉";
      break;
    case 5:
      res = "末吉";
      break;
    case 6:
      res = "秀吉";
      break;
    case 7:
      res = "凶";
      break;
    case 8:
      res = "大凶";
      break;
  }
  cout << "You are " << res << "!!!" << endl;
}
