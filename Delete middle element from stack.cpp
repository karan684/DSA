#include <bits/stdc++.h> 


void solve(stack<int>&inputStack, int count, int size){
    
    //basecase
    if(count == size/2){
        inputStack.pop();
        return;
    }
    
    //store the value
    int num = inputStack.top();
    inputStack.pop();
    
    //recursive call
    solve(inputStack, count + 1, size);
    
    //put the poped element back together
    inputStack.push(num);
}


void deleteMiddle(stack<int>&inputStack, int N){
	
    int count = 0;
    solve(inputStack, count, N);
   
}
