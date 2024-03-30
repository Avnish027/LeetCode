class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z') str+=char(s[i]+32);
            if(s[i]>='a' && s[i]<='z') str+=s[i];
            if(s[i]>='0' && s[i]<='9') str+=s[i];
        }
        // if(str.size()==1) return false;
        int a=0, e=str.size()-1;
        while(a<e){
            if(str[e]!=str[a]) return false;
            a++;e--;
        }
        return true;
        
    }
};