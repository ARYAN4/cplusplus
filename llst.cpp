#include<iostream>
using namespace std;

class Node{

     public:
     int data;
     Node *nptr;


}; 

void printList(Node *head)
{
  int ii=0; 
   while(head!=NULL)
   {
       cout<<"Index : "<<ii++<<" "<<"Data : "<<head->data<<endl;
       head=head->nptr; 
   }
}
void deleteNodeKeyToList(Node** head, int data)
{
   
   if((*head)==NULL)
   {
       cout<<"List is Empty<<endl"<<endl;
   }
   Node* temp=(*head);
   Node* prev=NULL;
   while(temp->data!=data && temp!=NULL)
   {
     prev=temp;
     temp=temp->nptr;
      
   }
   if(temp==(*head))
   {
     (*head)=temp->nptr;
     temp->nptr=NULL;
     delete temp;
     return ;
   }
   if(temp==NULL)
   {
     cout<<"Key is not in List"<<endl;
   }
   prev->nptr=temp->nptr;
   temp->nptr=NULL;
   delete temp;
   
}

void deleteNodeLastToList(Node** head)
{

   if((*head)==NULL)
   {
      cout<<"List is Empty"<<endl;
      return;
   } 
   if((*head)->nptr==NULL)
   {
      (*head) = NULL;
      return ;
   }
   Node* temp=(*head);
   while(temp->nptr->nptr!=NULL)
   {
       //cout<<"Index : "<<head->data<<" "<<"Data : "<<head->data<<endl;
       temp=temp->nptr; 
   }
  temp->nptr = NULL;
}

int FindLengthToList(Node* head)
{
   int linkListLength=0;
   while(head!=NULL)
   {
       linkListLength++;  
       head=head->nptr; 
   }
 return linkListLength;
}

void addNodeFirstToList(Node** head, int data)
{
   Node *temp= new Node();
   //Node *first=(*head);
   temp->nptr=(*head);
   temp->data= data;
   (*head)= temp;   
}

void addNodeMiddleToList(Node* head, int data)
{
   if(head==NULL)
      return; 
   Node *temp= new Node();
   temp->data= data;
   //Node *last=(*head);
   temp->nptr=head->nptr;
   head->nptr=temp;    
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

void detectLoopInList(Node* head)
{

   if((head)==NULL)
   {
       cout<<"List is Empty<<endl"<<endl;
   }
   
   Node* fast = head;
   Node* slow = head;   
   while(fast !=NULL && slow !=NULL && fast->nptr!=NULL)
   {
      slow = slow->nptr;
      fast = fast->nptr->nptr;

      if(fast == slow)
      {
        cout<<"Detec loop in List"<<endl;
        break;
      }  
   } 
  return ;
}

void reverseList(Node** head)
{

   if((*head)==NULL)
   {
       cout<<"List is Empty<<endl"<<endl;
   }
   
   Node* current = (*head);
   Node* prev=NULL;
   Node* next = NULL; 
  
   while(current !=NULL)
   {
      next = current->nptr;
      current->nptr = prev;
      prev= current;
      current = next;  
   } 
   (*head) =prev;
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
   addNodeFirstToList(&head, 5); 
   addNodeMiddleToList(head->nptr,6);

   

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
   cout<<"Length of List: "<<FindLengthToList(head)<<endl;

   //deleteNodeLastToList(&head);
   //printList(head);
   //cout<<"Length of List: "<<FindLengthToList(head)<<endl;
   //head->nptr->nptr->nptr->nptr->nptr = head->nptr;
   //detectLoopInList(head);
   reverseList(&head);
   //deleteNodeKeyToList(&head, 2);
   printList(head);
   //cout<<"Length of List: "<<FindLengthToList(head)<<endl;

  
}



