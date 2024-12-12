
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
};

node* insertIntoBST(node* &root, int val){
    if(root == NULL){
        root = new node(val);
        return root;
    }
    
    if(val > root->data){
        root->right = insertIntoBST(root->right, val);
    } else {
        root->left = insertIntoBST(root->left, val);
    }
    return root;
}


bool search(node* root, int data){
    if(root == NULL) return false;
    if(root->data == data) return true;
    
    if(data < root->data){
        return search(root->left, data);
        
    }
    if(data > root->data){
        return search(root->right, data);
    }
}

int findMin(node* root){
    if(root == NULL) {
        cout << "root is empty";
        return -1; // or some other error value
    }
    
    node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}



void takeInput(node* &root){
    int data;
    cin>>data;
    
    while(data!= -1){
        insertIntoBST(root, data);
        cin>>data;
    }
}


void preorder(node* root){
    if(root != NULL) {
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data << " ";
        inorder(root->right);
    }
}

void postorder(node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
}


int main(){
    node* root = NULL;
    
    cout<<"enter data to create BST";
    takeInput(root);
    
    cout<<"here is the inorder : ";
    inorder(root);
    cout << endl;
    cout<<"here is the min : "<< findMin(root) <<endl;
}