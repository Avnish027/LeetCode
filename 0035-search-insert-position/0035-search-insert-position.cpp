class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // if(nums.size()==0) return 0;
        // int s=0, e=nums.size()-1, mid=s+(e-s)/2, ans=nums.size();
        // while(s<=e){
        // if(nums[mid]==target){
        //     ans=mid;
        //     e=mid-1;
        // }
        //     else if(nums[mid]>target){
        //         ans=mid;
        //         e=mid-1;
        //     }
        //     else s=mid+1;
        //     mid=s+(e-s)/2;
        // }
        // return ans;
        
        
        int s=0,e=nums.size()-1, mid=s+(e-s)/2, position=nums.size();
        while(s<=e){
            if(nums[mid]>=target){
                position=mid;
                e=mid-1;
            }
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        
        
        return position;
        
    }
};