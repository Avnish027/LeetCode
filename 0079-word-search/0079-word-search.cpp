class Solution {
public:
    bool valid(vector<vector<char>>& board, int i, int j){
        int row=board.size();
        int col=board[0].size();
        return (i>=0)&&(i<row)&&(j>=0)&&(j<col);
    }
    
//     void fun(vector<vector<char>>& board, string word, int i, int j, int word_ind, bool& ans, vector<vector<bool>>& visited){
//         if(word_ind>=word.size()) {ans=true;
//                                   return;}
//         visited[i][j]=1;
//         if(valid(board, i+1, j) && word[word_ind]==board[i+1][j] && !visited[i+1][j]){
//             fun(board, word, i+1,j,word_ind+1, ans,visited);
//         }
//         if(valid(board, i-1, j) && word[word_ind]==board[i-1][j] && !visited[i-1][j]){
//             fun(board, word, i-1,j,word_ind+1, ans,visited);
//         }
//         if(valid(board, i, j+1) && word[word_ind]==board[i][j+1] && !visited[i][j+1]){
//             fun(board, word, i,j+1,word_ind+1, ans,visited);
//         }
//         if(valid(board, i, j-1) && word[word_ind]==board[i][j-1] && !visited[i][j-1]){
//             fun(board, word, i,j-1,word_ind+1, ans,visited);
//         }
//         visited[i][j]=0;
        
//     }
    
    
    
    void fun(vector<vector<char>>& board, string word, int i, int j, int word_ind, bool& ans){
        if(word_ind>=word.size()) {ans=true;
                                  return;}
        char a= board[i][j];
        board[i][j]=1;
        if(valid(board, i+1, j) && word[word_ind]==board[i+1][j] && !board[i+1][j]!=1){
            fun(board, word, i+1,j,word_ind+1, ans);
        }
        if(valid(board, i-1, j) && word[word_ind]==board[i-1][j] && !board[i-1][j]!=1){
            fun(board, word, i-1,j,word_ind+1, ans);
        }
        if(valid(board, i, j+1) && word[word_ind]==board[i][j+1] && !board[i][j+1]!=1){
            fun(board, word, i,j+1,word_ind+1, ans);
        }
        if(valid(board, i, j-1) && word[word_ind]==board[i][j-1] && board[i][j-1]!=1){
            fun(board, word, i,j-1,word_ind+1, ans);
        }
        board[i][j]=a;
        
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        bool ans=0;
        int row= board.size();
        int col= board[0].size();
        vector<vector<bool>> visited(row,vector<bool>(col,0));
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(board[i][j]==word[0]){
                    fun(board, word, i ,j,1,ans);
                }
            }
        }
        return ans;
    }
};