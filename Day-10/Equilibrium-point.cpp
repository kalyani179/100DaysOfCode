class Solution{
      public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
     int equilibriumPoint(long long a[], int n) {
    
        if(n==1) return 1;
        if(n==2) return -1;
        int sum = a[0],leftSum = 0,rightSum = 0;
        vector<int> sumArray;
        sumArray.push_back(a[0]);
        for(int i=1;i<n;i++){
            sum+=a[i];
            sumArray.push_back(sum);
        }
    
        for(int i=1;i<n-1;i++){
            leftSum = sumArray[i]-a[i];
            rightSum = sumArray[n-1]-sumArray[i];
            if(leftSum == rightSum) return i+1;
        }
        return -1;
    }


};