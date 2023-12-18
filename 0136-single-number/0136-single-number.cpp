class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int b=0;
        for(int i=0;i<nums.size();i++){
            b=b^nums[i];
        }
        return b;
    }
};