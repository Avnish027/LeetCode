class Solution {
public:
    void fun(vector<int>& nums, int i, vector<int>ds, vector<vector<int>>& ans){
        ans.push_back(ds);
        for(int j=i; j<nums.size(); j++){
            if(j>i && nums[j]==nums[j-1]) continue;
            
            ds.push_back(nums[j]);
            fun(nums,j+1,ds,ans);
            ds.pop_back();
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        fun(nums,0,ds,ans);
        return ans;
    }
};