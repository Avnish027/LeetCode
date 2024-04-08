class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(nums.size()==0) return 0;
        for(auto s:st) v.push_back(s) ;
        int count=1;
        int maxi=1;
        for(int i=0; i<v.size()-1; i++){
            if(v[i]==v[i+1]-1) {
                count++;
               maxi=max(count,maxi) ;
            }
            else count=1;
        }
        return maxi;
    } 
    
};