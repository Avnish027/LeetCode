class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int m=matrix.size();
        vector<int> v;
        int n=matrix[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    v.push_back(i);
                    v.push_back(j);
                    
                    
                }
            }
        }
        int i=0;
        while(i<v.size()){
            for(int k=0; k<matrix[0].size(); k++){
                        matrix[v[i]][k]=0;
                    }
                    for(int k=0; k<matrix.size(); k++){
                        matrix[k][v[i+1]]=0;
                    }
            i+=2;
        }
    }
};