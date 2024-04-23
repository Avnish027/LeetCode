class Solution {
public:
    int characterReplacement(string s, int k) {
        //Brute Force approach
        // int max_len=0;
        // for(int i=0; i<s.size(); i++){
        //     vector<int> v(26,0); int maxi=INT_MIN;
        //     for(int j=i; j<s.size(); j++){
        //         v[s[j]-'A']++;
        //         maxi=max(maxi,v[s[j]-'A']);
        //         int diff= j-i+1-maxi;
        //         if(diff<=k) max_len=max(max_len,j-i+1);
        //         else break;
        //     }
        // }
        // return max_len;
        
        int max_len=0;
        for(int i=0; i<s.size(); i++){
            vector<int> v(26,0); int max_freq=0;
            for(int j=i; j<s.size(); j++){
                v[s[j]-'A']++;
                max_freq=max(max_freq, v[s[j]-'A']);
                if(j-i+1-max_freq<=k) max_len=max(max_len,j-i+1);
                else break;
            }
        }
        return max_len;
    }
};