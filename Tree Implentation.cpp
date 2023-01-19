#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node *right;
    
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    
    if (data == -1){
        return NULL;
    }
    
    cout<<"Enter the data to insert at the left of "<< data <<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter the data to insert at the right of "<< data <<endl;
    root -> right = buildTree(root -> right);
    
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp = q.front();
        q.pop();
        
        if (temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
        
            if(temp -> right){
                q.push(temp -> right);
            }
        }
        
    }
}

void preorder(node * root){
    
    if(root == NULL){
        return;
    } 
    
    cout<<root -> data <<" ";
    preorder(root -> left);
    preorder(root -> right);
}


void postorder(node * root){
    
    if(root == NULL){
        return;
    } 
    
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data <<" ";
}


void inorder(node * root){
    
    if(root == NULL){
        return;
    } 
    
    inorder(root -> left);
    cout<<root -> data <<" ";
    inorder(root -> right);
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        cout<<"Enter left node for: "<< temp -> data <<endl;
        int leftdata;
        cin>>leftdata;
        
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp ->left);
        }
        
        cout<<"Enter right node for: "<< temp -> data <<endl;
        int rightdata;
        cin>>rightdata;
        
        if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp ->right);
        }
    }
}


int main() {
    
    node* root = NULL;
    
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1  -1 -1 -1
    
    
    // root = buildTree(root);
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout<< "printing the level order traversal output" << endl;
    // levelOrderTraversal(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;
    // postorder(root);

    return 0;
}
