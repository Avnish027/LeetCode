class Solution {
public:
    void sortColors(vector<int>& nums) {
        // for(int i=nums.size(); i>0; i--){
        //     for(int j=0; j<i-1; j++){
        //         if(nums[j]>nums[j+1]) 
        //         swap(nums[j],nums[j+1]);
        //     }
        // }
        
        for(int i=nums.size()-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                if(nums[j]>nums[j+1]) swap(nums[j],nums[j+1]);
            }
        }
        
    }
};