class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        if(nums[0]==1 && nums[n-1]==n) return 0;
        int index1,index2;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                index1 = i;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==n){
                index2 = n-1-i;
                if(i<index1) index2--;

            }
        }
        return index1+index2;
    }
};