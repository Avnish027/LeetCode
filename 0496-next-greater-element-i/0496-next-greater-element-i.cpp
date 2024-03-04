#include<bits/stdc++.h>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> v(nums2.size(),-1);
        for(int i=0; i<nums2.size(); i++){
            while(!st.empty() && nums2[st.top()]<nums2[i]){
                    v[st.top()]=nums2[i];
                    st.pop();
            }
            st.push(i);
        }
        vector<int> ans(nums1.size(),-1);
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]) ans[i]=v[j];
            }
        }
        return ans;
        
        
    }
};