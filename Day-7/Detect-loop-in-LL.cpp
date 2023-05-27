/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
       Node *slow_p = head,*fast_p=head;
       while(fast_p!=NULL && fast_p->next!=NULL){
           slow_p = slow_p->next;
           fast_p = fast_p->next->next;
           if(slow_p == fast_p){
               return true;
           }
       }
       return false;
    }
};