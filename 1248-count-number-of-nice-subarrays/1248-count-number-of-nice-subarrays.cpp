class Solution {
public:
    int fun(vector<int> v, int k){
        int l=0, r=0,count_odd=0, count_sub=0;
        while(r<v.size()){
            if(v[r]%2==1) count_odd++;
            while(count_odd>k){
                if(v[l]%2==1) count_odd--;
                l++;
            }
            count_sub=count_sub+r-l+1;
            r++;
        }
        return count_sub;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        // // TLE wala code
        // int count=0;
        // for(int i=0; i<nums.size(); i++){
        //     int no=0;
        //     for(int j=i; j<nums.size(); j++){
        //         if(nums[j]%2==1) no++;
        //         if(no==k) count++;
        //     }
        // }
        // return count;
        
        int a= fun(nums,k);
        int b= fun(nums,k-1);
        return a-b;
        
    }
};