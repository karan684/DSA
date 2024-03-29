//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    
  private:
    
    Node* isMiddle(Node* head){
        
        Node* fast = head -> next;
        Node* slow = head;
        
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    

    
    Node* reverse(Node* head){
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
  
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if (head -> next == NULL){
            return 1;
        }
        
        // step 1 - find mid;
        Node* mid = isMiddle(head);
        Node* temp = mid -> next;
        
        //step 2 - reverse the linked list
        mid -> next = reverse(temp);
        
        //step 3 - compare the digits
        Node* temp2 = head;
        Node* temp1 = mid -> next;
        
        while(temp1 != NULL){
            if(temp1 -> data != temp2 -> data){
                return 0;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        //step 4 - repeat step 2
        temp = mid -> next;
        mid -> next = reverse(temp);
        
        return 1;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
