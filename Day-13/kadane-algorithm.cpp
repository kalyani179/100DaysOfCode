class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        int  res  = arr[0],maxEnding = arr[0];
        for(int i=1;i<n;i++){
            maxEnding = max(maxEnding+arr[i],arr[i]);
            res = max(res,maxEnding);
        }
        return res;
        
    }
};