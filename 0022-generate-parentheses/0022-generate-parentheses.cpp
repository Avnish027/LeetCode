class Solution {
public:
    void fun(int n, string ds, vector<string>& v){
        if(ds.size()==2*n){
            stack<char> st;
            for(int i=0; i<ds.size(); i++){
                if(ds[i]=='(') st.push(ds[i]);
                else{
                    if(st.empty()) return ;
                    else st.pop();
                }
            }
            if(!st.empty()) return;
                v.push_back(ds);
                return;}
            
            ds.push_back('(');
            fun(n,ds,v);
            ds.pop_back();
            ds.push_back(')');
            fun(n,ds,v);
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string ds;
        fun(n,ds,v);
        return v;
    }
};