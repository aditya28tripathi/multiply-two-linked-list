long long  multiplyTwoLists (Node* l1, Node* l2)
{
  long long int c1 = 0 , c2=0;
  
  while(l1!=NULL){
      
      c1=c1*10+(l1->data);
      c1=c1%1000000007;
      l1=l1->next;
      
  }
  
  while(l2!=NULL){
      c2=c2*10+(l2->data);
      c2=c2%1000000007;
      
      l2=l2->next;
  }
  
  return (c1*c2)%1000000007;
}
