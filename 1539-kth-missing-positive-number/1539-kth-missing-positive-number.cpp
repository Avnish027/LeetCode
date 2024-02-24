class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v(1001,0);
        for(int i=0; i<arr.size(); i++){
            v[arr[i]]++;
        }
        for(int i=1; i<v.size(); i++){
            if(v[i]==0){
                k--;
                if(k==0) return i;
            }
        }
        return v.size()-1 + k;
    }
};