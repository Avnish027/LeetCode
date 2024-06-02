class Solution {
public:
    int minimumChairs(string s) {
        int ans=0;
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='E') st.push(1);
            else st.pop();
            if(ans<st.size())ans=st.size();
        }
        return ans;
    }
};