Node* deleteK(Node *head,int k)
{
    if (head == NULL)
        return NULL;
 
    if(k==1)
        return NULL;
    int count=0;
    Node* cur=head;
    Node* prev=NULL;
    while(cur!=NULL)
    {
         
        count++; 
        if(count==k)
        {
            
            delete(prev->next);
            prev->next=cur->next;
            count=0;
        }
        if (count != 0)
            prev = cur;
        
            cur=prev->next;
          
        
    }
    return head;
  //Your code here
}
