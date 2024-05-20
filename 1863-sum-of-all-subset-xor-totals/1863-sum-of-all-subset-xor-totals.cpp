class Solution {
public:
    void fun(vector<int>& nums, int i,int half, int& ans){
        if(i>=nums.size()){ 
            ans+=half;
        
            return;}
        
        
        fun(nums,i+1,half,ans);

        fun(nums,i+1,half^nums[i],ans);
        
    }
    
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        vector<int> v;
        fun(nums,0,0,ans);
        return ans;
    }
};