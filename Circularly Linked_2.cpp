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
bool isCircular(Node* head) {    
    if(head==NULL || head->next == head)
        return true;        
    
    if(head->next == NULL)        
        return false;        
    
    Node* fast = head;    
    Node* slow = head;        
    
    while(fast)    
    {        
        fast = fast->next;        
        
        if(fast)            
            fast = fast->next;        
        else            
            return false;        
        
        slow = slow->next;        
        
        if(slow==fast)        
        {            
            if(fast == head && slow == head)
                return true;            
            else                
                return false;        
        }    
    }

   if(fast==NULL)        
       return false;                            
}
