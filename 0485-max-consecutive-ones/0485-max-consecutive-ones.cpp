class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int max_len=0;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i; j<nums.size(); j++){
        //         if(nums[j]!=1) break;
        //         max_len= max(max_len, j-i+1);
        //     }
        // }
        // return max_len;
        
       int max_len=0, l=0, r=0;
        while(r<nums.size()){
            while(r<nums.size() && nums[r]!=1 ){
                l=r;r++;l++;
            }
            if(r>=nums.size() || l>=nums.size()) return max_len;
            max_len=max(max_len,r-l+1);
            r++;
        }
        return max_len;
    }
};