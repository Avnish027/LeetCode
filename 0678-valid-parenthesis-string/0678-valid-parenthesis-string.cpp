class Solution {
public:
    bool checkValidString(string s) {
       stack<int> s1;
        stack<int> s2;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') s1.push(i);
            else if(s[i]=='*') s2.push(i);
            else{
                if(s1.empty() && s2.empty()) return false;
                else{
                    if(!s1.empty()) s1.pop();
                    else s2.pop();
                }
            }
        }
        while(!s1.empty() && !s2.empty()){
            if(s1.top()<s2.top()){
                s1.pop(); s2.pop();}
            else{ return false;}
        }
        if(!s1.empty()) return false;
        return true;
    }
};