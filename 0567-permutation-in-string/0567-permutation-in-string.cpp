class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> s1_freq(26,0);
        vector<int> s2_freq(26,0);
        int k=s1.size();
        int match=0;
        int total_match=0;
        for(int i=0; i<s1.size(); i++){
            s1_freq[s1[i]-'a']++;
        }
        for(int i=0; i<k; i++){
            s2_freq[s2[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            if(s1_freq[i]==s2_freq[i]) match++;
            
        }
        if(match==26) return true;
        
        for(int i=k; i<s2.size(); i++){
            if(s2_freq[s2[i-k]-'a']==s1_freq[s2[i-k]-'a']){
                match--;
            }
        
                s2_freq[s2[i-k]-'a']--;
            
            if(s2_freq[s2[i-k]-'a']==s1_freq[s2[i-k]-'a']) match++;
            if(s2_freq[s2[i]-'a']==s1_freq[s2[i]-'a']){
                match--;
            }
            s2_freq[s2[i]-'a']++;
            if(s2_freq[s2[i]-'a']==s1_freq[s2[i]-'a']){
                match++;
            
            }
            
            if(match==26) return true;
        }
        return false;
    }
};