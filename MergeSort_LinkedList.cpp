/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/
 node* findMid(node* head){
        
        node* fast = head -> next;
        node* slow = head;
        
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
}

node* merge(node*left, node* right){
    if(left == NULL){
        return right;
    }
    
    if (right == NULL){
        return left;
    }
    
    node* ans = new node(-1);
    node* temp = ans;
    
    while(left != NULL && right != NULL){
        if(left -> data <= right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    
    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    
    while(right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    ans = ans -> next;
    return ans;
}


node* mergeSort(node *head) {
    // base case
    if (head == NULL || head -> next ==NULL){
        return head;
    }
    
    //finding mid
    node* mid = findMid(head);
    
    // dividing the linked list into two parts
    node* left = head;
    node* right = mid -> next;
    mid -> next = NULL;
        
    // sorting left and right side;
    left = mergeSort(left);
    right = mergeSort(right);
    
    //merging the two linked list
    node* result = merge(left, right);
    
    return result;
}
