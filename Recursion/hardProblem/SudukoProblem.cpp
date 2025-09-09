#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isSafe(const vector<vector<char>>& board, int row, int col, char dig)
{
    // Issue: 'dig' is an int, but board stores char. Should use char for 'dig'.
    // Also, function should take board by reference (const vector<vector<char>>& board) for efficiency.

    // Check row
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == dig)
            return false;
    }

    // Check column
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == dig)
            return false;
    }

    // Check 3x3 grid
    int srow = (row / 3) * 3;
    int scol = (col / 3) * 3;
    for (int i = srow; i < srow + 3; i++) {
        for (int j = scol; j < scol + 3; j++) {
            if (board[i][j] == dig)
                return false;
        }
    }

    return true; // Issue: You returned false always. Should return true if safe.
}
bool helper(vector<vector<char>>& board, int row, int col)
{
    // Issue: board should be passed by reference (vector<vector<char>>& board), otherwise changes are not saved.
    // Issue: You should only set board[row][col] = dig if isSafe returns true, and then call helper recursively inside the if block.
    // Issue: The recursive call to helper should be inside the isSafe block, not outside.
    // Issue: If you find a solution, return true immediately. If not, backtrack.

    if (row == 9) {
        return true;
    }

    int nextRow = row, nextCol = col + 1;
    if (nextCol == 9) {
        nextRow++;
        nextCol = 0;
    }

    if (board[row][col] != '.') {
        return helper(board, nextRow, nextCol);
    }

    for (char dig = '1'; dig <= '9'; dig++) {
        if (isSafe(board, row, col, dig)) {
            board[row][col] = dig;
            if (helper(board, nextRow, nextCol)) {
                return true;
            }
            board[row][col] = '.'; // backtrack
        }
    }
    return false;
}

int main()
{
    // Example Sudoku puzzle (empty cells are '.')
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    if (helper(board, 0, 0)) {
        for (auto str : board) {
            for (char val : str) {
                cout << val << ",";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists." << endl;
    }
    return 0;
}