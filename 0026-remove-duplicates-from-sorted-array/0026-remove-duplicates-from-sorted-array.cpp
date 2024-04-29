class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Brute force 
        // int i=0;
        // while(i<nums.size()-1){
        //     if(nums[i]==nums[i+1]){
        //         nums.erase(nums.begin()+i);
        //     }
        //     else i++;
        // }
        // int a =nums.size();
        // return a;
        
        //Optimize
        if(nums.size()==1) return nums[0];
        int i=0, j=1;
        while(j<nums.size()){
            if(nums[j]==nums[i]) j++;
            else{
                nums[++i]=nums[j++];
            }
        }
        return i+1;
        
        
        
    }
};