#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int no= nums.size()/2;
        int freq=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                freq+=1;
                if(freq>no) return nums[i];
            }
            else freq=1;
        }
        return nums[0];
    }
};