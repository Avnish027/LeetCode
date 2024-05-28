class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        vector<int> v(right+1,0);
        v[1]=1;
        for(int i=2; i<=right; i++){
            if(v[i]==0){
                for(int j=2*i; j<=right; j+=i){
                    v[j]=1;
                }
            }
        }
        vector<int> range;
        for(int i=left; i<=right; i++){
            // if(left==1) continue;
            if(v[i]==0) range.push_back(i);
        }
        
        int mini=INT_MAX;
        
        vector<int> ans(2,-1);
        // if(range.size()==1) return ans;
        for(int i=1; i<range.size(); i++){
            if(range[i]-range[i-1]<mini){
                mini=range[i]-range[i-1];
                ans[0]=range[i-1];
                ans[1]=range[i];
            }
        }
        return ans;
    }
};