class Solution {
public:
    // void fun(vector<int> &nums, int i, vector<vector<int>> &v, vector<int> &temp){
    //     if(i>=nums.size()){
    //         v.push_back(temp);return;
    //     }
    //     fun(nums,i+1,v,temp);
    //     temp.push_back(nums[i]);
    //     fun(nums,i+1,v,temp);
    //     temp.pop_back();
    // }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        // int i=0;
        // vector<int> temp;
        // vector<vector<int>> v;
        // fun(nums,i,v,temp);
        // return v;
        
        int len=nums.size();
        int total=pow(2,len);
        vector<vector<int>> ans;
        for(int i=0; i<total; i++){
            vector<int> v;
            int temp=i;int count=0;
            while(temp){
                if(temp&1) v.push_back(nums[count]);
                temp=temp>>1;
                count++;
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};