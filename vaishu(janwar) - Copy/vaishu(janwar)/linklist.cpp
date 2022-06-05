#include<iostream>
using namespace;
class node
{
private:
    /* data */
public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
 void insertattail(node* &head,int val){
  node* n=  new node(val);
  if(head==NULL){
     // n->next=head;
      head=n;
      return;
  }
  node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data>>"->";
        temp=temp->next;
    }
    cout<<NULL<<endl;
}











int main()
{
    node* head=NULL;
    insertattail(head,1)
    insertattail(head,2)
    insertattail(head,3)
    insertattail(head,4)
    display(head);
    insertattail(head,val);


}