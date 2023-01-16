#include <bits/stdc++.h>
void solve(stack<int>& myStack, int x){
    
    //base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    
    //taking out the top element
    int num = myStack.top();
    myStack.pop();
    
    //recursive call
    solve(myStack, x);
    
    //putting num back together
    myStack.push(num);
}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
