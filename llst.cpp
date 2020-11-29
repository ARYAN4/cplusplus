#include<iostream>
using namespace std;

class Node{

     public:
     int data;
     Node *nptr;


}; 

void printList(Node *head)
{

   while(head!=NULL)
   {
       cout<<"Index : "<<head->data<<" "<<"Data : "<<head->data<<endl;
       head=head->nptr; 
   }
}

void addNodeLastToList(Node** head, int data)
{
   //cout<<"Add : "<<head<<endl;
   Node *temp= new Node();
   Node *last=(*head);
   temp->nptr=NULL;
   temp->data= data;
   if((*head)==NULL)
   {
       *head=temp;
       return ;  
   }
      
   while(last->nptr!=NULL)
   {
     last=last->nptr;
   } 
   
   last->nptr = temp;
   //cout<<"Add1 : "<<head<<" data: "<< head->data<<endl;
   return ;
}


int main()
{

   Node *head=NULL; 
   Node *temp=NULL;
   //Node *second=NULL;
   //Node *third=NULL;
   
   addNodeLastToList(&head, 1);
   //cout<<"Add2 : "<<head<<endl;
   addNodeLastToList(&head, 2);
   //cout<<"Add2 : "<<head<<endl;
   addNodeLastToList(&head, 3);

   /*  
   head= new Node();
   second = new Node();
   third = new Node();

   head->data= 1;
   head->nptr=second;
   
   second->data=2;
   second->nptr=third;

   third->data=3;
   third->nptr=NULL;
   */
   cout<<"Hello Link list"<<endl;
   printList(head);
}



