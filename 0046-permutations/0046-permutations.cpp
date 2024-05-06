class Solution {
public:
    void fun(vector<int> nums, vector<int> ds, vector<vector<int>>& ans){
        if(nums.size()==ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=-11){
                ds.push_back(nums[i]);
                int temp=nums[i];
                nums[i]=-11;
                fun(nums,ds,ans);
                ds.pop_back();
                nums[i]=temp;
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        fun(nums,ds,ans);
        return ans;
    }
};