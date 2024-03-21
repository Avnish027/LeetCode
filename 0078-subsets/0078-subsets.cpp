class Solution {
public:
    void fun(vector<int> &nums, int i, vector<vector<int>> &v, vector<int> &temp){
        if(i>=nums.size()){
            v.push_back(temp);return;
        }
        fun(nums,i+1,v,temp);
        temp.push_back(nums[i]);
        fun(nums,i+1,v,temp);
        temp.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<int> temp;
        vector<vector<int>> v;
        fun(nums,i,v,temp);
        return v;
        
    }
};