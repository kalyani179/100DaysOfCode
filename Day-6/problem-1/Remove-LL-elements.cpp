class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        ListNode* dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode* prev = dummyNode;
        ListNode* curr = head;
        while(curr!=NULL){
            if(curr->val == val){
                prev->next = curr->next;
                curr = curr->next;
                continue;
            }
            prev = prev->next;
            curr = curr->next;
        }
        return dummyNode->next;
    }
};