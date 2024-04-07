class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<4)return ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-3; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<nums.size()-2; j++){
                 if(j!=i+1 && nums[j]==nums[j-1]) continue;

               long long new_tar1= nums[j]+nums[i];
                long long new_tar=target-new_tar1;
                
                int s=j+1, e=nums.size()-1;
                while(s<e){
                    if(nums[s]==new_tar-nums[e]){
                        vector<int> temp={nums[i],nums[j],nums[s],nums[e]};
                        ans.push_back(temp);
                        s++;e--;
                        while(s<e && nums[s]==nums[s-1]) s++;
                        while(s<e && nums[e]==nums[e+1]) e--;
                    }
                    else if(nums[s]+nums[e]>new_tar) e--;
                    else s++;
                }
            }
        }
        return ans;
    }
};