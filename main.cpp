#include <iostream>

using namespace std;

int sum(int n);

int main(){

  int userInput;
  cout << "What value would you like for 'n'? ";
  cin >> userInput;
  cout << sum(userInput) << endl;
  
}

int sum(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++)
    sum = sum + i;
  return sum;
}
