class Solution {
public:
    void insertAtTail(ListNode* &head, ListNode* &tail, int val) {
        
        ListNode* temp = new ListNode(val);
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    ListNode* add(ListNode* l1,ListNode* l2)
    {
        int carry=0;
        ListNode* head=NULL;
        ListNode* tail=NULL;

        while(l1!=NULL || l2!=NULL || carry!=0 )
        {
            int a=0;
            if(l1!=NULL)
            a=l1->val;
            int b=0;
            if(l2!=NULL)
            b=l2->val;
            int sum=carry+a+b;
            int digit=sum%10;
            insertAtTail(head,tail,digit);
              carry = sum/10;
            if(l1 != NULL)
                l1 = l1 -> next;
            
            if(l2 != NULL)
                l2 = l2 -> next;
        }
        return head;
        }

  
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=add(l1,l2);
        return ans;

    }
    
};
