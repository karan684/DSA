#include <iostream>
#include <vector>
#include<string>
using namespace std;

void sayDigits(int n){
  vector<string> arr {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  int digits;
  //base case
  if (n <= 0)
    return;
  
  //rc
  sayDigits(n/10);

  //processing
  digits = n % 10;
  cout << arr[digits] << " ";
}

int main() {
  int n;
  cin >> n;

  sayDigits(n);
}
