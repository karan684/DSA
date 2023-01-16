void insertAtBottom(stack<int> &stack, int x){
    
    //base case
    if(stack.empty()){
        stack.push(x);
        return;
    }
    
    //taking out the top element
    int num = stack.top();
    stack.pop();
    
    //recursive call
    insertAtBottom(stack, x);
    
    //putting num back together
    stack.push(num);
}


void reverseStack(stack<int> &stack) {
    // base case
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    reverseStack(stack);
    
    insertAtBottom(stack, num);
}
