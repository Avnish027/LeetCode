class Solution {
public:
    bool valid(vector<vector<int>>& grid, int i, int j ){
        int row=grid.size();
        int col=grid[0].size();
        return((i>=0) && (j>=0) && (i<row)&& (j<col));
    }
    
    void fun(vector<vector<int>>& grid, int i, int j,int sum,int& ans){
        if(sum>ans) ans=sum;
        int temp=grid[i][j];
        grid[i][j]=0;
        if( valid(grid,i+1,j)&& grid[i+1][j]!=0 ){
            sum+=grid[i+1][j];
            fun(grid,i+1,j,sum,ans);
            sum-=grid[i+1][j];
        }
        if( valid(grid,i-1,j)&& grid[i-1][j]!=0 ){
            sum+=grid[i-1][j];
            fun(grid,i-1,j,sum,ans);
            sum-=grid[i-1][j];
        }
        if( valid(grid,i,j+1)&& grid[i][j+1]!=0){
            sum+=grid[i][j+1];
            fun(grid,i,j+1,sum,ans);
            sum-=grid[i][j+1];
        }
        if( valid(grid,i,j-1) &&grid[i][j-1]!=0){
            sum+=grid[i][j-1];
            fun(grid,i,j-1,sum,ans);
            sum-=grid[i][j-1];
        }
        grid[i][j]=temp;
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int ans=0;
        for(int i=0;i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]!=0){
                    int sum=grid[i][j];
                    fun(grid,i,j,sum,ans);
                }
            }
        }
        return ans;
    }
};