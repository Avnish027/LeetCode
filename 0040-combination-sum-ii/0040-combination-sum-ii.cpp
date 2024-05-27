class Solution {
public:
// Brute force that generate all the combination and store it in set so that duplicates are removed.
//     void fun(vector<int> v, int i, int target,set<vector<int>>& st, vector<int> ds){
//        if(target==0) {
//            sort(ds.begin(), ds.end());
//            st.insert(ds);
//            return;
//        }
//         if(target<0) return;
//         if(i>=v.size()) return;
//         fun(v,i+1,target,st,ds);
//         ds.push_back(v[i]);
//         fun(v,i+1,target-v[i], st,ds);
        
//     }
    
//     void fun(int i,int target, vector<int> candidates, vector<int> ds, vector<vector<int>>& ans){
//         if(target==0){
//             ans.push_back(ds);
//             return;
//         }
        
//         for(int j=i; j<candidates.size();j++){
//             if(j>i && candidates[j]==candidates[j-1]) continue;
//             ds.push_back(candidates[j]);
//             fun(j+1, target-candidates[j],candidates, ds, ans);
//             ds.pop_back();
//         }
//     }
    
 void   fun(int i, int target, vector<int>& v, vector<int>& ds, vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
                 if(i>=v.size()|| target<0)    return;

        for(int j=i; j<v.size(); j++){
            if(j>i && v[j]==v[j-1]) continue;
            ds.push_back(v[j]);
            fun(j+1,target-v[j],v,ds,ans);
            ds.pop_back();
        }
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
// Brute force
//         set<vector<int>> st;
//         vector<int> ds;
//         fun(candidates,0,target,st,ds);
        
//         vector<vector<int>> ans;
//         for(auto it:st) ans.push_back(it);
//         return ans;
        
        sort(candidates.begin(), candidates.end());
       vector<vector<int>> ans;
        vector<int> ds;
        fun(0,target, candidates, ds, ans);
        return ans;
        
    }
};