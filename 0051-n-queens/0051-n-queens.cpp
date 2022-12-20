class Solution {
public:
    vector<vector<string>> ans;
    bool isSafe(vector<string> &board, int n, int col, int row){
        int temprow = row;
        int tempcol = col;
        
        while(col>=0 && row>=0){
            if(board[row][col] == 'Q') return false;
            col--;
            row--;
        }
        row = temprow;
        col = tempcol;
        while(col>=0){
            if(board[row][col] == 'Q') return false;
            col--;
        }
        row = temprow;
        col = tempcol;
        while(col>=0 && row<n){
            if(board[row][col] == 'Q') return false;
            col--;
            row++;
        }
        return true;
    }
    void solve(vector<string> &board, int n, int col){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row<n; row++){
            if(isSafe(board, n, col, row)){
                board[row][col] = 'Q';
                solve(board, n, col+1);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {        
        vector<string> board (n, string(n, '.'));
        solve(board, n, 0);
        return ans;
    }
};