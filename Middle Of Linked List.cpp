#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

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
Node* getMiddle(Node* head){
    if (head == NULL || head -> next == NULL){
        return head;
    }
    Node* fast = head -> next;
    Node* slow = head;
    
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
}

int getLen(Node* head){
    int count = 0;
    
    while(head != NULL){
        head = head -> next;
        count++;
    }
    return count;
}

Node *findMiddle(Node *head) {
    // Write your code here
    return getMiddle(head);
    
    /*int len = getLen(head);
    int ans = (len/2);
    
    Node* temp = head;
    while(ans--){
        temp = temp -> next;
    }
    return temp;*/
}
