class Solution {
public:
    void fun(string s, int i, vector<string>& ans){
        if(i>=s.size()){
            ans.push_back(s);
            return;
        }
        // if(s[i]>='0' && s[i]<='9') fun(s,i+1,ans);
        fun(s,i+1,ans);
        if(s[i]>='a' && s[i]<='z'){ s[i]=toupper(s[i]);
                                  fun(s,i+1,ans);}
       else if(s[i]>='A' && s[i]<='Z') {s[i]=tolower(s[i]);
                                       fun(s,i+1,ans);}
        
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        fun(s,0,ans);
        return ans;
    }
};