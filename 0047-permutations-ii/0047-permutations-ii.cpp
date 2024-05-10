class Solution {
public:
    void fun(vector<int> nums, int i, set<vector<int>>& ans){
        if(i>=nums.size()) {
            ans.insert(nums);
            return;
        }
        for(int j=i; j<nums.size(); j++){
            
            swap(nums[j],nums[i]);
            fun(nums,i+1,ans);
            swap(nums[j],nums[i]);
        }
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        fun(nums,0,ans);
        vector<vector<int>> a;
        for(auto it=ans.begin(); it!=ans.end(); it++){
            a.push_back(*it);
        }
        return a;
    }
};