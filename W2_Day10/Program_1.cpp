_1class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head -> next)
            return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow && fast  && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next ;
            if(slow == fast)
                break;
        }
        if(slow != fast)
            return NULL;
        slow = head;
        while(true && slow != fast){
            slow = slow -> next ;
            fast = fast -> next ;
            if(slow == fast)
                break;
        }
        return slow;
    }
};