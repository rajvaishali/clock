#include"bits/stdc++.h"
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




int Calheight(Node* root){

if(root==NULL){
    return 0;
}
int l = Calheight(root->left);
int r = Calheight(root->right);
return max(l,r)+1;



}






int main(){
    
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
   root->right->right= new Node(7);
   cout<<Calheight(root)<<endl;
}
