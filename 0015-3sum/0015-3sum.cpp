 #include<bits/stdc++.h>
class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target= -1*nums[i];
            int s=i+1, e=nums.size()-1;
            while(s<e){
                if(nums[s]+nums[e]==target){
                    vector<int> temp ={nums[i],nums[s],nums[e]};
                    v1.push_back(temp);
                    s++;e--;
                    while(s<e && nums[s]==nums[s-1]) s++;
                    while(s<e && nums[e]==nums[e+1])e--;
                }
                else if(nums[s]+nums[e]<target) s++;
                else e--;
            }
        }
        
        return v1;
        
    }
};