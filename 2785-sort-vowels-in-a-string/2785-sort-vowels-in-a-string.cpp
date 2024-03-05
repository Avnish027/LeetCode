class Solution {
public:
    string sortVowels(string s) {
        vector<int> large(26,0);
        vector<int> small(26,0);
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'  ){
                small[s[i]-'a']++;
                s[i]='#';
            }
             else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'  ){
                large[s[i]-'A']++;
                s[i]='#';
            } 
        }
        string vow="";
        for(int i=0; i<large.size(); i++){
            while(large[i]--){
            vow+=(i+'A');
            }}
            for(int i=0; i<small.size(); i++){
            while(small[i]--){
            vow+=(i+'a');
            }
        }    
        
        int k=0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='#') s[i]=vow[k++];
        }
        return s;
    }
        
};