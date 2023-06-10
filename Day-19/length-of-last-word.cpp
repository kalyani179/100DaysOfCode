#include <string.h>
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,n=s.size();
        if(n==0) return 0;
        for(int i=n-1;i>=0;i--){
            if(int(s[i])==32 and count==0) continue;
            if(int(s[i])==32 && count!=0) break;
            else count++;
        }
        return count;
    }
};