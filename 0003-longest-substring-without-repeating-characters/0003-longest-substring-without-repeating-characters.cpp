class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len=0;
        for(int i=0; i<s.size(); i++){
            vector<int> v(256,0);
            for(int j=i; j<s.size(); j++){
                if(v[s[j]]!=0) break;
                max_len=max(max_len,j-i+1);
                v[s[j]]++;
            }
        }
        return max_len;
    }
};