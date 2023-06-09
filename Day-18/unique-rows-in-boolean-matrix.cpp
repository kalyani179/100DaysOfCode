class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        unordered_set<string> st;
        vector<vector<int>> res;
        for(int i=0;i<row;i++){
            string s;
            vector<int> v;
            for(int j=0;j<col;j++){
                v.push_back(M[i][j]);
                s+=to_string(M[i][j]);
            }
            if(st.find(s) == st.end()){
                res.push_back(v);
            }
            st.insert(s);
        }
        return res;
    }
};