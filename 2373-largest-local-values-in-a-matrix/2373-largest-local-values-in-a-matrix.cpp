class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
//         int n= grid.size();
//         int x=0,y=0;
//         vector<vector<int>> ans(n-2, vector<int>(n-2));
//         for(int i=0; i+2<n; i+=2){
//             int x=0;
//             for(int j=0; j+2<n; j+=2){
//                 int maxi=0;
//                 for(int x=i; x<=i+1; x++){
//                     for(int y=j; y<=j+1; y++){
//                         if(maxi<grid[x][y]) maxi=grid[x][y];
//                     }
//                 }
//                 // ans[x][y++]=maxi;
//                 //             x++;
//                 ans[i / 2][x++] = maxi; // Update ans with the correct indices

//             }
//         }
//         return ans;
                int n= grid.size();

        vector<vector<int>> ans(n-2, vector<int>(n-2));
        for(int i=0; i<n-2; i++){
            for(int j=0; j<n-2; j++){
                int maxi=INT_MIN;
                for(int x=i; x<=i+2; x++){
                    for(int y=j; y<=j+2; y++){
                        if(maxi<grid[x][y]) maxi=grid[x][y];
                    }
                }
                ans[i][j]=maxi;
            }
        }
        
        return ans;  
    }
};