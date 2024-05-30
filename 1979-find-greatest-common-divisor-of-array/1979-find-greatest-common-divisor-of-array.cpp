class Solution {
public:
    int fun(int a, int b){
        if(a==0 || b==0) return a?a:b;
        return fun(b,a%b);
    }
    
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return fun(nums[0],nums[nums.size()-1]);
    }
};