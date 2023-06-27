class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int ind = -1;
      int n = nums.size();

      //Finding the Break Point
      for(int i=n-2;i>=0;i--){
          if(nums[i]<nums[i+1]){
              ind = i;
              break;
          }
      }

      //If Break Point Doesn't Exist
      if(ind==-1){
          reverse(nums.begin(),nums.end());
          return;
      }

      //Finding Next Greater Element And Swap it with ind element
      for(int i=n-1;i>=ind;i--){
          if(nums[i]>nums[ind]){
              swap(nums[i],nums[ind]);
              break;
          }
      }

      // reverse the remaining elements
      reverse(nums.begin()+ind+1,nums.end());
     
    }
};