class Solution {
public:
    int fun(vector<int>& nums, int k){
        int l=0, r=0, subarr=0;
        vector<int> v(100000,0); set<int> st;
        while(r<nums.size()){
            st.insert(nums[r]);
            v[nums[r]]++;
            while(st.size()>k){
                v[nums[l]]--;
                if(v[nums[l]]==0) st.erase(nums[l]);
                l++;
            }
            subarr+=r-l+1;
            r++;
        }
            return subarr;
    }
    
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //TLE wala code
        // int count=0;
        // for(int i=0; i<nums.size(); i++){
        //     set<int> st;
        //     for(int j=i; j<nums.size(); j++){
        //         st.insert(nums[j]);
        //         if(st.size()==k) count++;
        //         else if(st.size()>k) break;
        //     }
        // }
        // return count;
        
        
        // optimize
        int a=fun(nums,k);
        int b=fun(nums,k-1);
        return a-b;
        
    }
};