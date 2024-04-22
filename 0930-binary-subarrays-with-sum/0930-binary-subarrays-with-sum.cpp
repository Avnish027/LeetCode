class Solution {
public:
    int fun(int goal, vector<int> v){
        int l=0, r=0, sum=0,subset=0;
        if(goal==-1) return 0;
        while(r<v.size()){
            sum+=v[r];
            while(sum>goal){
                sum-=v[l++];
            }
            subset=subset+r-l+1;
            r++;
        }
        return subset;
    
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //TLE wala code
        // int count=0;
        // for(int i=0; i<nums.size(); i++){
        //     int sum=0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum+=nums[j];
        //         if(sum==goal) count++;
        //     }
        // }
        // return count;
        
      int a= fun(goal,nums);
        int b=fun(goal-1,nums);
        return a-b;
        
        
    }
};