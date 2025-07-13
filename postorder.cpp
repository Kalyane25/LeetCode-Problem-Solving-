# include<iostream>
using namespace std;
struct node {
    int data;
    node* left;
    node* right;
};
node* newNode(int data){
    node* element=new node();
    element->data=data;
    element->left=NULL;
    element->right=NULL;
    return element;
}
void printInorder(node * node){
    if (node ==NULL)
    return ;
    // first traverse left part of the list then right the root 
    printInorder(node->left);
    printInorder(node->right);
   cout<<node->data<<" ";
    
    
}
int main(){
    node* root =newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
     printInorder(root);
}