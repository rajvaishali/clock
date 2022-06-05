#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void sum(Node* root){
    if(root==NULL){
        return;
    }
sum(root->left);
sum(root->right);
if(root->left!=NULL){
    root->data +=root->left->data;
}
if(root->right!=NULL){
    root->data +=root->right->data;

}
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}










int main(){
Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);
cout<<preorder(root);
cout<<endl;
cout<<sum(root);
cout<<endl;
cout<<preorder(root);
return 0;
}