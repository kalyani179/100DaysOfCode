class Solution {
public:
    vector<vector<int>> generate(int numRows) {  
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++){
            int ans = 1;
            vector<int> v;
            v.push_back(ans);
            for(int j=1;j<=i;j++){
                ans *= (i+1-j);
                ans /= j;
                v.push_back(ans);
            }
            res.push_back(v);
        }
        return res;
    }
};