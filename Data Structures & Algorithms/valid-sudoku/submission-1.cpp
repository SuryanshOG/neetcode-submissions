class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> checker(10,0);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                int digit = board[i][j] - '0';
                if (checker[digit] > 0) return false;
                else checker[digit]++;
            }
            fill(checker.begin(), checker.end(), 0);
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') continue;
                int digit = board[j][i] - '0';
                if (checker[digit] > 0) return false;
                else checker[digit]++;
            }
            fill(checker.begin(),checker.end(), 0);
        }
        for(int i = 1; i < 9; i += 3) {
            for (int j = 1; j < 9; j += 3) {
                for (int k = i - 1; k <= i + 1; k++) {
                    for (int l = j - 1; l <= j + 1; l++) {
                        if (board[k][l] == '.') continue;
                        int digit = board[k][l] - '0';
                        if (checker[digit] > 0) return false;
                        else checker[digit]++;
                    }
                }
                fill(checker.begin(), checker.end(), 0);
            }
        }
        return true;
    }
};