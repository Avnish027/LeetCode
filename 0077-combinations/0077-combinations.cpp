class Solution {
public:
    
    void fun(vector<int>& v, int k,int i, vector<int> &ds, vector<vector<int>>& ans){
        if(ds.size()==k) {
            ans.push_back(ds);
            return ;
        }
        for(int j=i; j<v.size(); j++){
            ds.push_back(v[j]);
            fun(v,k,j+1,ds,ans);
            ds.pop_back();
        }
    }
    
    
    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>> ans;
        vector<int> ds;
        vector<int> v;
        for(int i=1; i<=n; i++){
            v.push_back(i);
        }
        fun(v,k,0,ds,ans);
        return ans;
    }
};