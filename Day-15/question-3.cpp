class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        
        vector<vector<int>> res(n, vector<int>(n, 0)); long long sum = 0;
        for(int i=0;i<queries.size();i++){
            int type  = queries[i][0];
            int index = queries[i][1];
            int value = queries[i][2];
            if(type == 0){ 
                for(int j=0;j<n;j++){
                    sum+=(value-res[index][j]);
                     res[index][j] = value;
                }
            }
            else{
                 for(int j=0;j<n;j++){
                   sum+=(value-res[j][index]);
                   res[j][index] = value;
                }  
            }
        }
        return sum;
    }
};