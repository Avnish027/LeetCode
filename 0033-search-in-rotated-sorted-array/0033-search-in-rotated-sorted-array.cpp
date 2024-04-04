class Solution {
public:
    int bs(vector<int>& v, int s, int e, int target){
        int mid=s+(e-s)/2;
        while(s<=e){
            if(v[mid]==target) return mid;
            else if(v[mid]<target) s=mid+1;
            else e=mid-1;
            mid=s+(e-s)/2;
        }
        return -1;
        
    }
    
    int search(vector<int>& nums, int target) {
      int s=0, e=nums.size()-1, mid=s+(e-s)/2;
        int pivot_index=0;
        while(s<=e){
            if(nums[pivot_index]<=nums[mid]) s=mid+1;
            else{
                pivot_index=mid;
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        
        if(nums[nums.size()-1]>=target) return bs(nums,pivot_index,nums.size()-1,target);
        else {
            if(pivot_index>0) return bs(nums,0,pivot_index-1,target);
        }
        
        
        
        return -1;
    }
};