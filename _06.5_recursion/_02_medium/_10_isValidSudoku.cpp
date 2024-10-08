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
