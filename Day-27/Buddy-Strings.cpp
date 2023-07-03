class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        unordered_map<char,int> m1,m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
            m2[goal[i]]++;
        }
        if(s==goal){
            for(int i=0;i<s.size()-1;i++){
               if(m1[s[i]]>=2){
                   return true;
               }
            }
            return false;
        }
       
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]!=m2[s[i]]){
                return false;
            }
        }
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]) count++;
        }
        if(count == 2) return true;
        return false;
    }
};