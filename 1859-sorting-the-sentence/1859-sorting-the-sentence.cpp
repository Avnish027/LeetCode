class Solution {
public:
    string sortSentence(string s) {
        map<int,string> mp;
        int i=0, len=0;
        while(i<s.size()){
            if(s[i]>='0' && s[i]<='9'){
                mp[s[i]]= s.substr(len,i-len);
                i=i+2; len=i;
            }
            else i++;
        }
        string ans="";
        for(auto it=mp.begin(); it!=mp.end(); it++){
            ans=ans+it->second+" ";
}
        ans.pop_back();
        return ans;
    }
};