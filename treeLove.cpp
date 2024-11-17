#include <iostream>
#include <queue>
using namespace std;



class node{
public:
int data;
node* left;
node* right;

node(int val){
  this->data = val;
  this->left = NULL;
  this->right = NULL;
  
}

};

node* buildTree(node* root){
  cout<<"enter the data: "<<endl;
  int data;
  cin>>data;
  root = new node(data);

  if(data == -1){
    return NULL;
  }

  cout<<"enter data left of "<<data<<" :"<<endl;
  root->left = buildTree(root->left);
  cout<<"enter data right of "<<data<<" :"<<endl;
  root->right = buildTree(root->right);
  return root;
  
}

void levelOrderTraversal(node* root){
  queue<node*> q;
  q.push(root);

  while(!q.empty()){
    node* temp = q.front();
    // cout<<temp->data<<" ";
    q.pop();

    if(temp ==NULL){
      cout<< endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<<temp->data<<" ";
      if(temp->left){
        q.push(temp->right);
      }

      if(temp->right){
        q.push(temp->right);
      }
    }
    
  }
}


node* buildFromLevelOrder(node* root){
  queue<node*> q;
  q.push(root);
}






int main(){
  node* root = NULL;
  root = buildTree(root);
  levelOrderTraversal(root);
  
  
}