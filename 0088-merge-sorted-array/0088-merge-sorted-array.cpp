class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        for(int i=0; i<m; i++){
            v.push_back(nums1[i]);
        }
        nums1.clear();
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(v[i]>nums2[j]){
                nums1.push_back(nums2[j++]);
            }
            else{
                nums1.push_back(v[i++]);
            }
        }
        while(i<m){
            nums1.push_back(v[i++]);
        }
        while(j<n){
            nums1.push_back(nums2[j++]);
        }
    }
};