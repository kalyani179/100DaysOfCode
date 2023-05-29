# Approach
- we will use similar concept of merging two sorted arrays (merge function in merge sort)
# Complexity
- Time Complexity - O(m+n) where m,n are the lengths of given lists
- Space Complexity - O(1)
# Algorithm
1. Check whether if any of the given two lists is empty, if yes return the other list.
2. Initialize two pointers head,tail to NULL
3. If head1->data is smaller or equal to head2->data,
 - Initialize head and tail with head1
 - Move head1 to head1->next
4. Else
  - Initialize head and tail with head2
  - Move head2 to head2->next
5. While any one of the lists is not empty :
  - If head1->data is smaller or  equal to head2->data -- If yes, Move tail to head1 (tail->next = head1) and tail = head1 , move head1 by one.
  - Else  Move tail to head2 (tail->next = head2) and tail = head2 , move head2 by one.
6. If head2 is not empty, do tail->next = head2
7. If head1 is not empty, do tail->next  = head1
8. return head