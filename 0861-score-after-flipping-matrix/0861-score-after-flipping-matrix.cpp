class Solution {
public:
    
    
    
    
    int matrixScore(vector<vector<int>>& grid) {
        int row= grid.size();
        int col=grid[0].size();
        for(int i=0; i<row; i++){
            if(grid[i][0]==0){
                for(int j=0; j<col; j++){
                    grid[i][j]=!(grid[i][j]);
                }
            }
        }
        for(int i=1; i<col; i++){
            int count0=0, count1=0;
            for(int j=0; j<row; j++){
                if(grid[j][i]==1) count1++;
                else count0++;
            }
            if(count0>count1){
                for(int j=0; j<row; j++){
                    grid[j][i]=!(grid[j][i]);
                }
            }
        }
        int sum=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                 sum += grid[i][j] * pow(2, col - 1 - j);
            }
        
        }
        return sum;
    }
};