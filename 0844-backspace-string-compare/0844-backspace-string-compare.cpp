class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        for(int i=0; i<s.size(); i++){
            if(!a.empty() && s[i]=='#') a.pop();
            else if(s[i]=='#')continue;
            else a.push(s[i]);
        }
        for(int i=0; i<t.size(); i++){
           if(!b.empty() && t[i]=='#') b.pop();
            else if(t[i]=='#')continue;
            else b.push(t[i]);
        }
        string scopy, tcopy;
        while(!a.empty()){
            scopy.push_back(a.top()); a.pop();
        }
        while(!b.empty()){
            tcopy.push_back(b.top()); b.pop();
        }
        return scopy==tcopy;
    }
};