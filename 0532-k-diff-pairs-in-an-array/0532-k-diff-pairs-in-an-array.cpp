class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size()==1) return 0;
        sort(nums.begin(), nums.end());
        
        if(k==0){
            int count=0;
            vector<vector<int>> v1;
            for(int i=1; i<nums.size(); i++){
                if(nums[i]-nums[i-1]==k){
                    vector<int> v;
                    v.push_back(nums[i-1]);
                    v.push_back(nums[i]);
                     v1.push_back(v);
                }
                
            }
            
            int i=0;
            while(i+1<v1.size()){
                if(v1[i][0]==v1[i+1][0] && v1[i][1]==v1[i+1][1]) v1.erase(v1.begin()+(i+1));
                else i++;
            }
            return v1.size();
            
        }
        
        vector<int> v;
        v.push_back(nums[0]);
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==v[v.size()-1]) continue;
            else v.push_back(nums[i]);
        }
        
        int s=0,e=1,count=0;
        while(e<v.size()){
            if(v[e]-v[s]==k) {
            count++;
                s++;
                e++;
            }
            else if(v[e]-v[s]>k) s++;
            else e++;
        }
        
        return count;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};