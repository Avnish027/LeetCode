class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
//        int max_len=0;
//         for(int i=0; i<nums.size(); i++){
//             int count=0;
//             for(int j=i; j<nums.size(); j++){
//                 if(nums[j]==0) count++;
//                 if(count>k) break;
//                 max_len= max(max_len,j-i+1);
//             }

//         }
//         return max_len;
        
        int max_len=0, l=0, r=0, count=0;
        while(r<nums.size()){
            if(nums[r]==0) count++;
            while(count>k){
                if(nums[l]==0)count--; 
                l++;
            }
            max_len=max(max_len, r-l+1);
            r++;
        }
        return max_len;
    }
};