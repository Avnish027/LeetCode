class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> small(26,0);
        vector<int> capital(26,0);
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z'){
                small[s[i]-'a']++;
            }
            else capital[s[i]-'A']++;
        }
        
        bool odd=0;
        int ans=0;
        for(int i=0; i<26; i++){
            if(small[i]%2==0) ans+=small[i];
            else{
                ans+=small[i]-1;
                odd=1;
            }
            if(capital[i]%2==0) ans+=capital[i];
            else {ans+=capital[i]-1;
                 odd=1;
                 }
        }
        if(odd) return ans+1;
        return ans;
    }
};