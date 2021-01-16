void segregateEvenOddList(Node** head)
{

   if((*head)==NULL)
   {
       cout<<"List is Empty<<endl"<<endl;
   }
   
   Node* current = (*head);
   Node* oddHNode=NULL;
   Node* evenHNode = NULL;
   Node* lastevenNode = NULL;
   Node* lastoddNode = NULL;

   while(current !=NULL)
   {
      if(current->data %2 ==0)
      {
         
         if(evenHNode = NULL)
         {
             evenHNode=current;
             lastevenNode = current;
         }
         else 
         {
           lastevenNode->nptr = current;
           lastevenNode = current;     
         }

      }
      else
      {
         if(oddHNode = NULL)
         {
             oddHNode=current;
             lastoddNode = current;
         }
         else 
         {
           lastoddNode->nptr = current;
           lastoddNode = current;     
         }
      }
      current = current->nptr;  
   }
   if(oddHNode ==NULL)
   {
      lastevenNode->nptr = NULL:
      (*head) = evenHNode;
   }
   else if(evenHNode ==NULL)
   {
     lastoddNode->nptr = NULL;
     (*head) = oddHnode;
   }
   else  
   {
      // Make odd first;
      lastevenNode->nptr=NULL;
      lastoddNode->nptr = evenHNode;
      (*head) = oddHNode;
      // Make even first;
      // lastoddNode->nptr=NULL;
      // lastevenNode->nptr = oddHNode;
      //(*head) = evenHNode;
          
   }
  return ;
}

void swapNodeToList(Node* head, int d1,int d2)
{
   
   if((*head)==NULL)
   {
       cout<<"List is Empty<<endl;"
   }
   Node* temp=(*head);
   Node* ptrev=NULL
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




