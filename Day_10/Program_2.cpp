Node *flatten(Node *head)
{
  Node*curr = head;
//   Node*curr2 = head;
  vector<int>v;
  while(curr != NULL)
  {
     Node*temp = curr;
     while(temp != NULL)
     {
       v.push_back(temp->data);
       temp = temp->bottom;
     } 
     
     curr = curr->next;
  }
  
  sort(v.begin() , v.end());
  
  Node*dummy = new Node(-1);
  Node*ans = dummy;
  
  for(int i = 0 ; i<v.size() ; i++)
  {
    ans->bottom = new Node(v[i]);
    ans = ans->bottom;
  }
  
  dummy->bottom->next = NULL;
  
  return dummy->bottom;
  
}