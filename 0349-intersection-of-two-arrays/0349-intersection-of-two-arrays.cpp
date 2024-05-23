class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> a;
//         for(int i=0; i<nums1.size(); i++){
//             for(int j=0; j<nums2.size();j++){
//                 if(nums1[i]==nums2[j]){
//                     a.push_back(nums1[i]);
//                     for(int k=0; k<nums2.size();k++){
//                         if(nums2[k]==nums2[j]){
//                         nums2[k]=INT_MIN;
                           
//                         }
//                     }
                    
//                 }
//             }
//         }
//         // for(int i=0; i<nums2.size();i++){
//         //     if(nums2[i]==INT_MIN) continue;
//         //     a.push_back(nums2[i]);
//         // }
//         return a;
        
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        for(int i=0; i<nums1.size(); i++){
            if(i>0 && nums1[i]==nums1[i-1]) continue;
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j] ){
                    ans.push_back(nums1[i]);
                    nums2[j]=-1;
                    break;
                }
            }
        }
        return ans;
        
    }
};