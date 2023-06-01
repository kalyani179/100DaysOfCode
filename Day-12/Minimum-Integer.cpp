class Solution {
  public:
    int minimumInteger(int N, vector<int> &v) {
        
        
      long long sum = 0;
        for(int i=0;i<N;i++){
            sum+=v[i];
        }
        long long mini = INT_MAX;
        for(int i=0;i<N;i++){
            long long x = v[i];
            if(sum<=x*N){
                mini = min(x,mini);
            }
        }
        return mini;
    }
};