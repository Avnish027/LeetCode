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
        
        int l=0, r=0, max_len=0, max_freq=0;
        vector<int> v(26,0);
        while(r<s.size()){
            v[s[r]-'A']++;
            max_freq=max(max_freq,v[s[r]-'A']);
            while(r-l+1-max_freq>k){
                v[s[l]-'A']--;
                for(int i=0; i<26; i++) max_freq=max(max_freq,v[s[l]-'A']);
                l++;
            }
            max_len=max(max_len,r-l+1);
            r++;
        }
        return max_len;
    }
};