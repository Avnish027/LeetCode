class Solution {
public:
    string convert(string s, int numRows) {
        reverse(s.begin(),s.end());
        vector<vector <int>> v(numRows);
        while(!s.empty()){
            for(int i=0; i<numRows; i++){
                if(!s.empty()) {v[i].push_back(s[s.size()-1]);s.pop_back();}
            }
            for(int j=numRows-2; j>0; j--){
                if(!s.empty()) {v[j].push_back(s[s.size()-1]);s.pop_back();}
            }
        }
        
        string str="";
        for(int i=0; i<v.size(); i++){
            int col= v[i].size();
            for(int j=0; j<col; j++){
                str+=v[i][j];
            }
        }
        return str;
     
    }
};