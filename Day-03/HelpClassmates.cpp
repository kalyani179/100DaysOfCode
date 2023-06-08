class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int> s; vector<int> v;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && arr[i]<=s.top()) s.pop();
            int ns = s.empty() ? -1 : s.top();
            v.push_back(ns);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    } 
};