class Solution {
public:
    void fun(vector<int>& candi, int i, int target, vector<int>& v, vector<vector<int>>& ans){
        if(i>=candi.size() || target<0) return;
        if(target==0) {
            ans.push_back(v);
        }
        for(int j=i; j<candi.size(); j++){
            v.push_back(candi[j]);
            fun(candi,j,target-candi[j],v,ans);
            v.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int> v;
        vector<vector<int>> ans;
        fun(candidates, 0, target, v, ans);
        return ans;
    }
};