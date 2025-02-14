//Problem Link: https://leetcode.com/problems/sudoku-solver/description/


class Solution {
public:
    bool isValid(int i, int j, char k, vector<vector<char>>& board) {
        // Check if placing k at board[i][j] is valid
        for (int t = 0; t < 9; t++) {
            // Check row, column, and 3x3 subgrid
            if (board[i][t] == k || board[t][j] == k || board[3 * (i / 3) + t / 3][3 * (j / 3) + t % 3] == k) {
                return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board) {
        // Traverse the entire board
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    // Try placing digits from '1' to '9'
                    for (char k = '1'; k <= '9'; k++) {
                        if (isValid(i, j, k, board)) {
                            board[i][j] = k;
                            if (solve(board)) return true;  // Recursively solve the rest
                            else board[i][j] = '.';  // Backtrack if no solution is found
                        }
                    }
                    return false;  // No valid number found for this cell
                }
            }
        }
        return true;  // Puzzle solved
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
