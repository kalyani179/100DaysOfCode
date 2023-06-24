class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int> m;
        int count = 0;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
            string s = words[i];
            reverse(words[i].begin(),words[i].end());
            if(m[words[i]] && s != words[i]){
                count++;
            }
        }
        return count;
    }
};