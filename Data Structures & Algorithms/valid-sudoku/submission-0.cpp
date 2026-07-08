class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> columns;
        unordered_map<int, unordered_set<char>> squares;
        for (int row = 0; row < 9; row++) {
            for (int column = 0; column < 9; column++) {
                if (rows[row].count(board[row][column]) || columns[column].count(board[row][column]) || squares[(row / 3) * 3 + (column / 3)].count(board[row][column])) {
                    return false;
                }
                if (board[row][column] != '.') {
                    rows[row].insert(board[row][column]);
                    columns[column].insert(board[row][column]);
                    squares[(row / 3) * 3 + (column / 3)].insert(board[row][column]);
                }
            }
        }
        return true;
    }
};
