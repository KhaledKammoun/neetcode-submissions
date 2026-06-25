class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> horizental_line(9, vector<bool>(9, false));
        vector<vector<bool>> vertical_line(9, vector<bool>(9, false));
        vector<vector<bool>> boxes(9, vector<bool>(9, false));

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0 ; j < board[i].size(); j++) {
                char c = board[i][j];
                if (c != '.') {
                    int c_int = c - '1';

                    int box_index = (i / 3) * 3 + (j / 3);
                    if (horizental_line[i][c_int] || vertical_line[j][c_int] || boxes[box_index][c_int]) {
                        return false ;
                    }

                    horizental_line[i][c_int] = true ;
                    vertical_line[j][c_int] = true ;
                    boxes[box_index][c_int] = true ;
                }
            }
        }

        return true ;
    }
};
