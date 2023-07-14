class Solution {
public:
    ListNode* callRecurssion(ListNode* head){
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* recNode = callRecurssion(head->next);
        ListNode* nextNode = head->next;

        nextNode->next = head;
        return nextNode;
    }
    ListNode* reverseList(ListNode* head) {
        return callRecurssion(head);
    }
}