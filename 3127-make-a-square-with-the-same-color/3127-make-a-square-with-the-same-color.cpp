class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int w=0, b=0;
        grid[0][0]=='B' ? b++: w++;
        grid[0][1]=='B' ? b++: w++;
        grid[1][0]=='B' ? b++: w++;
        grid[1][1]=='B' ? b++: w++;
        if(b>=3 || w>=3) return true;
        w=0;b=0;
        
        grid[0][1]=='B' ? b++: w++;
        grid[0][2]=='B' ? b++: w++;
        grid[1][1]=='B' ? b++: w++;
        grid[1][2]=='B' ? b++: w++;
        if(b>=3 || w>=3) return true;
        w=0;b=0;
        
        grid[1][0]=='B' ? b++: w++;
        grid[1][1]=='B' ? b++: w++;
        grid[2][0]=='B' ? b++: w++;
        grid[2][1]=='B' ? b++: w++;
        if(b>=3 || w>=3) return true;
        w=0;b=0;
        
        grid[1][1]=='B' ? b++: w++;
        grid[1][2]=='B' ? b++: w++;
        grid[2][1]=='B' ? b++: w++;
        grid[2][2]=='B' ? b++: w++;
        if(b>=3 || w>=3) return true;
        w=0;b=0;
        
        return false;

    }
};