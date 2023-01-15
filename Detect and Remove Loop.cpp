/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* floydDetectLoop(Node* head){
    
    if (head == NULL){
        return NULL;
    }
    
    Node* fast = head;
    Node* slow =head;
    
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        
        if(fast == slow){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    
    Node* intersection = floydDetectLoop(head);
    if (intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}


Node *removeLoop(Node *head)
{
    if (head == NULL){
        return NULL;
    }
    
    Node* startingNode = getStartingNode(head);
    if(startingNode == NULL){
        return head;
    }
    Node* temp = startingNode;
    
    while(temp -> next != startingNode){
        temp = temp -> next;
    }
    temp -> next = NULL;
    return head;
}
