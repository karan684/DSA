#include <iostream>
using namespace std;

int getSum(int *arr, int sum, int size){
  //base case
  if(size == 0)
    return 0;
  
  return sum = getSum(arr + 1, sum, size - 1) + arr[0];
  
  
}

int main(){
  int arr[] = {3, 2, 9, 6, 5};
  int sum = 0;
  int size = 5;

  cout << getSum(arr, sum, size);
}
