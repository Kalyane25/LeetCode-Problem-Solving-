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
    //first the root then left then right 
    cout<<node->data<<" ";
    printInorder(node->left);
    printInorder(node->right);
  
    
}
int main(){
    node* root =newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
     printInorder(root);
}