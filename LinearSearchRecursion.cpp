#include<iostream>
using namespace std;


bool linearSearch(int *arr, int size, int key){

    //base case
    if(size == 0)
        return false;

    if(arr[0] == key)
        return true;
    else
        return linearSearch(arr + 1, size - 1, key);   
}

int main(){

    int arr[] = {3, 2, 5, 1, 6};
    int key = 6;
    int size = 5;

    bool ans = linearSearch(arr, size, key);

    if(ans)
        cout<<" Key Found"<<endl;
    else
        cout<<" Key not found"<< endl;
    return 0;
}
