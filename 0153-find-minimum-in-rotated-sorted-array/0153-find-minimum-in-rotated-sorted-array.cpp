class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0, e=nums.size()-1, mid=s+(e-s)/2, ans=nums[0];
        while(s<=e){
        if(nums[0]>nums[mid]) {
            ans=nums[mid];
            e=mid-1;
        }
        else s=mid+1;
        mid=s+(e-s)/2;
        }
        return ans;
        
    }
};