int longestSubstrDistinctChars (string s)
{
     unordered_map<char,int> m; 
     int i=0,j=0;
     bool flag = 1;
     int n = s.size(),maxi = 0;
     while(i<n and j<n){
         if(m[s[j]]){
             i++;
             j=i;
             flag = 0;
             if(m.size()>maxi) maxi = m.size();
             m.clear();
         }
         else{
             m[s[j]]++;
             j++;
         }
     }
     if(m.size()>maxi) maxi = m.size();
     if(flag == 1) return m.size();
     return maxi;
}