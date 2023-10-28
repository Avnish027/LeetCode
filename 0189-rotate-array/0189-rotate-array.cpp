class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            
        // int rotat =k% nums.size();
        // reverse(nums.begin(), nums.end());
        // reverse(nums.begin(),nums.begin()+rotat);
        // reverse(nums.begin()+rotat, nums.end());

        
        int rotat= k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-rotat));
        reverse(nums.begin()+(nums.size()-rotat), nums.end());
        reverse(nums.begin(), nums.end());
        
    }
};