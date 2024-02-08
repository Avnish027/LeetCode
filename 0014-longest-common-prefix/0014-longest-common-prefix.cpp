class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a;
        int i=0;
        while((strs[0][i]==strs[strs.size()-1][i]) && (i<strs[0].size()) && (i<strs[strs.size()-1].size())){
        a.push_back(strs[0][i]);
            i++;
        }
        
        return a;
    }
};