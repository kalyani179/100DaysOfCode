class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
       vector<int> res;
       Node *curr1 = head1;
       Node *curr2 = head2;
       unordered_map<int,int> m;
       while(curr2!=NULL){
           m[curr2->data]++;
           curr2 = curr2->next;
       }
       while(curr1!=NULL){
           if(m[curr1->data]){
               res.push_back(curr1->data);
           }
           curr1 = curr1->next;
       }
       Node* final = new Node(res[0]);
       for(int i=1;i<res.size();i++){
           Node* curr = final;
           while(curr->next!=NULL){
               curr = curr->next;
           }
           curr->next = new Node(res[i]);
       }
       return final;
    }
};