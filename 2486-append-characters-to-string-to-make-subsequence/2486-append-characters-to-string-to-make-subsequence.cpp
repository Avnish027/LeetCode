class Solution {
public:
    int appendCharacters(string s, string t) {
        int count=0;
        int maxi=0;
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==t[j]){
                count++;
                maxi=max(maxi,count);
                j++;
            }
            
        }
        return t.size()-maxi;
    }
};