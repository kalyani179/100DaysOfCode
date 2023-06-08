class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int n = height.size();
        int left[n],right[n];
        int leftMax=height[0],rightMax=height[n-1];
        for(int i=0;i<n;i++){
            if(height[i]>leftMax){
                leftMax=height[i];
            }
            left[i]=leftMax;
        }
        for(int i=n-1;i>=0;i--){
            if(height[i]>rightMax){
                rightMax = height[i];
            }
            right[i]=rightMax;
        }
        for(int i=0;i<n;i++){
            res+=(min(left[i],right[i])-height[i]);
        }
        return res;
    }
};