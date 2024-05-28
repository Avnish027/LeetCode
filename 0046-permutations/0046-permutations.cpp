class Solution {
public:
//     void fun(vector<int> nums, vector<int> ds, vector<vector<int>>& ans){
//         if(nums.size()==ds.size()){
//             ans.push_back(ds);
//             return;
//         }
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]!=-11){
//                 ds.push_back(nums[i]);
//                 int temp=nums[i];
//                 nums[i]=-11;
//                 fun(nums,ds,ans);
//                 ds.pop_back();
//                 nums[i]=temp;
//             }
//         }
        
//     }
    
    // //Optimizing the space
    void fun(int i, vector<int> v, vector<vector<int>>& ans){
        if(i>=v.size()){ ans.push_back(v);return;}
        for(int j=i; j<v.size(); j++){
            swap(v[i],v[j]);
            fun(i+1,v,ans);
            swap(v[i],v[j]);
        }
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        // fun(nums,ds,ans);
        fun(0,nums,ans);
        return ans;
    }
};