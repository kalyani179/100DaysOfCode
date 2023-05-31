class Solution{
public:	
	
	string printString(string &s, char ch, int count)
	{
	    int countChar = 0;
	    string res="";
        bool flag = true;
        if(s.size()==1 and s[0]==ch  and count==0) return s;
        if(count == 0) return s;
	    for(int i=0;i<s.size()-1;i++){
	        if(s[i]==ch and flag){
	            countChar++;
	        } 
	        if(countChar == count){
	            flag = false;
	           res.push_back(s[i+1]);
	        }
	    }
	    if(res=="") return "Empty string";
	    return res;
	}
};