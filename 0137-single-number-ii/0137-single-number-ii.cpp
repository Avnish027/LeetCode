class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int len=nums.size();
        // sort(nums.begin(), nums.end());
        // if(len==2 || len==1) return nums[0];
        // for(int i=0; i<len; i+=3){
        //     if(i==len-1) return nums[len-1];
        //     if(nums[i]!=nums[i+1]) return nums[i];
        //     if(nums[i+1]!=nums[i+2]) return nums[i+1];
        // }
        // return 0;
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second==1) return it.first;
        }
        return 0;
    }
};