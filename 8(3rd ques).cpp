#include <iostream>

using namespace std;

class node{
    public: 
    int data;
    node *left;
    node *right;
    node(int element){
      this->data=element;
      this->left =this->right=NULL;

    }  
};
node* treeinsert(node *root,int key){
    if(root==nullptr){
        return new node(key);
    }
    if (key<root->data){
        root->left=treeinsert(root->left,key);
    }
    else if(key>root->data){
        root->right=treeinsert(root->right,key);
    }
    return root;
}
node* minimalelement(node* root) {
    while ( root->left != nullptr)
        root = root->left;
    return root;
}
node *treedelete(node *root,int key){
    if(root==nullptr)
    return root;
    if(key<root->data){
        root->left=treedelete(root->left,key);
    }
    else if(key>root->data){
        root->right=treedelete(root->right,key);
    }
    else{
       if(root->left==nullptr){
        node *temp=root->right;
        delete root;
        return temp;
       }
       else if (root->right==nullptr){
        node *temp=root->left;
        delete root;
        return temp;
       }
       else{
        node *temp= minimalelement(root->right);
        root->data=temp->data;
        root->right=treedelete(root->right,temp->data);
       }
        return root;

       
    }
}




int main() {
   
    return 0;
}