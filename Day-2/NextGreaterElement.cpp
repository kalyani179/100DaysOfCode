class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
       
       vector<long long> res;
       stack<long long> st;
       for(int i=n-1;i>=0;i--){
           while(!st.empty() and arr[i]>=st.top()) {st.pop();}
           long long nextLarger = st.empty() ? -1 : st.top();
           res.push_back(nextLarger);
           st.push(arr[i]);
       }
       reverse(res.begin(),res.end());
       return res;
    }
};
