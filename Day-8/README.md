# Approach
we will use Floyd's Cycle detection algorithm to detect loop and then we will remove it using the algorithm below.
# Complexity
Time Complexity - O(n)
Space Complexity - O(1)
# Algorithm
1. Detect loop using Floyd's Cycle detection algorithm.
2. Move slow_p at the beginning of LL and keep fast_p at the  meeting point.
3.Now, Move both slow and fast one by one(at same speed).The point where they meet is the first node of the loop.
4.Remove it by pointing fast->next to NULL.
