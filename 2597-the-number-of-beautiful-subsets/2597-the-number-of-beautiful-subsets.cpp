class Solution {
public:
    
    void fun(vector<int>& nums, int k, int i, int& count, vector<int>& v){
        if(i>=nums.size()){
            if(v.size()==0) return;
            else if(v.size()==1) {
                count++; return;
            }
            else{
                for(int i=0; i<v.size(); i++){
                    for(int j=i+1; j<v.size(); j++){
                        if(abs(v[i]-v[j])==k) return;
                    }
                }
                count++; return;
            }
        }
        
        fun(nums,k,i+1,count,v);
        v.push_back(nums[i]);
        fun(nums,k,i+1,count,v);
        v.pop_back();
    }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int> v;
        int count=0;
        fun(nums,k,0,count,v);
        return count;
    }
};