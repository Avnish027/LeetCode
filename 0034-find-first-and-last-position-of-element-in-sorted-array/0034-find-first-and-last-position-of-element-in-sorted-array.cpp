class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
//         int s=0,e=nums.size()-1,mid=s+(e-s)/2, first=-1, last=-1;
//         while(s<=e){
//         if(nums[mid]==target){
//             first=mid;
//             e=mid-1;
//         }
//         else if(nums[mid]>target) e=mid-1;
//         else s=mid+1;
//         mid=s+(e-s)/2;
//         }
        
//     s=0;e=nums.size()-1;mid=s+(e-s)/2;
//     while(s<=e){
//     if(nums[mid]==target){
//     last=mid;
//     s=mid+1;
//     }
//     else if(nums[mid]>target) e=mid-1;
//     else s=mid+1;
//     mid= s+(e-s)/2;
//     }
    
//     vector<int> a;
//         a.push_back(first);
//         a.push_back(last);
//         return a;
        
        int s=0, e=nums.size()-1, mid=s+(e-s)/2, first=-1;
        while(s<=e){
            if(nums[mid]==target){ first=mid; e=mid-1 ;}
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
            mid=s+(e-s)/2;
        }
         s=0; e=nums.size()-1; mid=s+(e-s)/2; int last=-1;
        while(s<=e){
            if(nums[mid]==target){ last=mid; s=mid+1 ;}
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        vector<int> v={first,last};
        return v;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};