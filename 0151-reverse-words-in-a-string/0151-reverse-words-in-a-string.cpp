class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int i=0, lef=-1, rig=-1;
        while(i<s.size()){
            if(s[i]==' '){
                i++; continue;
            }
            else{
                lef=i;
                rig=i;
                while(i<s.size() && s[i]!=' '){
                    rig=i++;
                }
                string word= s.substr(lef,rig-lef+1);
                st.push(word);
            }
        }
        string ans;
        while(!st.empty()){
            ans=ans+st.top() + ' ';
            st.pop();
        }
        ans.pop_back();
        return ans;
    
    }
};