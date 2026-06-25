class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Array of size 9 initialized to 0
        // Each integer's bits will act as seen or not.
        int rows[9] = {0};
        int cols[9] = {0};
        int boxes[9] = {0};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                
                int val = board[i][j] - '0';
                // ex: val = 5 --> mask = 0000100000 (5th position)
                int mask = 1 << val;
                int box_idx = (i / 3) * 3 + (j / 3);

                // If already 1, it's a duplicate
                if ((rows[i] & mask) || (cols[j] & mask) || (boxes[box_idx] & mask)) {
                    return false;
                }

                // Mark the bit as 1
                rows[i] |= mask;
                cols[j] |= mask;
                boxes[box_idx] |= mask;
            }
        }
        return true;
    }
};