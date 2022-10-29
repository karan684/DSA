#include<iostream>
using namespace std;


bool binarySearch(int *arr, int s, int e, int key){

    int mid = s + (e - s)/2;

    //base case

    // element not found
    if(s > e)
        return false;

    // element found - is also a base case
    if(arr[mid] == key)
        return true;
      
    if(key > arr[mid]){
      return binarySearch(arr, mid + 1, e, key);
    }
    else{
      return binarySearch(arr, s, mid - 1, key);
    }        
}

int main(){

    int arr[] = {2, 4, 6, 10, 14, 16};
    int key = 16;
    int size = 6;
    // int mid = s + (e - s)/2;

    bool ans = binarySearch(arr, 0, size - 1, key);

    if(ans)
        cout<<" Key Found"<<endl;
    else
        cout<<" Key not found"<< endl;
    return 0;
}
