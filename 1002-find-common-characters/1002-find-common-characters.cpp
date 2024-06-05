class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<vector<int>> v;
        for(int i=0; i<words.size(); i++){
            vector<int> a(26,0);
            int j=0;
            while(j<words[i].size()){
                a[words[i][j]-'a']++;
                j++;
            }
            v.push_back(a);
        }
        
        vector<string> ans;
        for(int i=0; i<26; i++){
            int mini=INT_MAX;
            for(int j=0; j<words.size(); j++){
                if(mini>v[j][i]) mini=v[j][i];
            }
            if(mini==0) continue;
            else {
                while(mini--){
                    ans.push_back(string(1,i+'a'));
                }
            }
        }
        return ans;
    }
};