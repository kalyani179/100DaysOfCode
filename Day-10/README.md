# Approach
We will use an extra space for Sum Array which stores the sum of previous elements.
# Complexity
- Time Complexity - O(n)
- Space Complexity - O(n)
# Algorithm
1. Initialize sum,leftSum,rightSum to 0 and a vector sumArray.
2. push_back the first element of the given array.
3. Run a loop from 1 to n-1
    - Add the element to sum
    - push_back sum to sumArray
4. Run a loop from 1 to n-2
    - leftSum = Subtract a[i] from sumArray[i]
    - rightSum = Subtract sumArray[i] from sumArray[n-1](total sum)
    - if leftSum is equal to rightSum - return index+1 (1-based indexing)
5. return -1