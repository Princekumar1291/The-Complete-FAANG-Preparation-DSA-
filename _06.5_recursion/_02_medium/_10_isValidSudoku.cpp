// https://leetcode.com/problems/valid-sudoku/



class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Create 3 sets for each row, column, and 3x3 grid
        vector<unordered_set<char>> rows(9), cols(9), grids(9);

        // Traverse the board
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];

                // If the cell is empty, skip it
                if (num == '.') continue;

                // Check the row
                if (rows[i].count(num)) return false;
                rows[i].insert(num);

                // Check the column
                if (cols[j].count(num)) return false;
                cols[j].insert(num);

                // Check the 3x3 grid
                int gridIndex = (i / 3) * 3 + (j / 3);
                if (grids[gridIndex].count(num)) return false;
                grids[gridIndex].insert(num);
            }
        }

        // If no conflicts are found, the board is valid
        return true;
    }
};








bool isValid(vector<vector<char>>& board,int i,int j,char k){
    for(int t=0;t<9;t++){
        if(board[i][t]==k) return false;
        if(board[t][j]==k) return false;
        if(board[3*(i/3)+t/3][3*(j/3)+t%3]==k) return false;
    }
    return true;
}
bool isValidSudoku(vector<vector<char>>& board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                for(char k='1';k<='9';k++){
                    if(isValid(board,i,j,k)){
                        board[i][j]=k;
                        if (isValidSudoku(board)) return true;  // Recursively solve the rest
                        else board[i][j] = '.';  // Backtrack if no solution is found
                    }
                }
                return false;
            }
        }
    }
    return true;
} 