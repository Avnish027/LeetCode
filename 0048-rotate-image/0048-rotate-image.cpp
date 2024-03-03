class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rotate= matrix.size()-1;
        vector<vector<int>> v(matrix.size(),vector<int>(matrix.size()));
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                v[j][rotate]=matrix[i][j];
            }
            rotate--;
        }
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                matrix[i][j]=v[i][j];
            }
        }
    }
};