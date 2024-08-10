#include<iostream>
using namespace std;

//Fill in the blank at LINE-1 with the appropriate if statement
//Fill in the blank at LINE-2 and LINE-3 with the appropriate return statements


bool IsLonger(string str1, string str2){
  if(str1.length() > str2.length()) //LINE-1
    return true; //LINE-2
  else
    return false; //LINE-3
}

int main(){
  string str1, str2;
  cin >> str1 >> str2;
  cout << str1 << ", " << str2 << ": " << IsLonger(str1, str2);
  return 0;
}