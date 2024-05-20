class Solution {
public:
    void fun(vector<int>& nums, int i, vector<int> v, int& ans){
        if(i>=nums.size()){ 
            if(v.size()){
            int half=0;
            for(int i=0; i<v.size(); i++){
                half=half^v[i];
            }
            ans+=half;
        }
            return;}
        
        
        fun(nums,i+1,v,ans);
        v.push_back(nums[i]);
        fun(nums,i+1,v,ans);
        
    }
    
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        vector<int> v;
        fun(nums,0,v,ans);
        return ans;
    }
};