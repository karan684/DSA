#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    // Write your code here.
    //base call
    if (head == NULL){
        return NULL;
    }
    
    // step 1 Reverse first k nodes
    Node* forward = NULL;
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;
    
    while(curr != NULL && count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    
    // recursion
    if(forward != NULL)
    head -> next = kReverse(forward, k);
    
    //step 3
    return prev;
    
}
