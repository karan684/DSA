#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
    // Write your code here.
    Node* temp = head -> next;
    
    if (head == NULL){
        return true;
    }
    
    while(temp != NULL && temp != head){
       temp = temp -> next;
    }
    if (temp == NULL){
        return false;
    }
    else{
        return true;
    }
}
