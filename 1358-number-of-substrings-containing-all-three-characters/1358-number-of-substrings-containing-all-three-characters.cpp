class Solution {
public:
    int numberOfSubstrings(string s) {
        //TLE wala code
        // int count=0;
        // for(int i=0; i<s.size(); i++){
        //     set<int> st;
        //     for(int j=i; j<s.size(); j++){
        //         st.insert(s[j]);
        //         if(st.size()==3)count++;
        //     }
        // }
        // return count;
        
        //Optimize
        int count=0; vector<int> v(3,-1);
        for(int i=0; i<s.size(); i++){
            v[s[i]-'a']=i;
            if(v[0]!=-1 && v[1]!=-1 && v[2]!=-1){
                count=count+1+ min({v[0],v[1],v[2]});
            }
        }
        return count;
        
    }
};