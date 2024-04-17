class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_len=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                if(nums[j]!=1) break;
                max_len= max(max_len, j-i+1);
            }
        }
        return max_len;
    }
};