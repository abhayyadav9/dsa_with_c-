#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isSafe(vector<string> board, int row, int col, int n)
{
    // for row
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }
    // col
    for (int j = 0; j < n; j++)
    {
        if (board[j][col] == 'Q')
        {
            return false;
        }
    }

    // left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

void Nqueen(vector<string> board, int row, int n, vector<vector<string>>& ans)
{
    if (row == n)
    {
        ans.push_back({board});
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(board, row, i, n))
        {
            board[row][i] = 'Q';

            Nqueen(board, row + 1, n, ans);
            board[row][i] = '.';
        }
    }
}

int main()
{
    int n=8;
    // cout << "Enter the value of n: ";
    // cin >> n;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    int count=0;
    Nqueen(board, 0, n, ans);
        for (auto str : ans) {
            count++;
            for (string val : str) {
                cout << val << ",";
            }
            cout << endl;
        }
    cout<<count;


    return 0;
}