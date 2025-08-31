#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24}
    };

    int m = arr.size();
    int n = arr[0].size();

    int startRow = 0, endRow = m - 1;
    int startCol = 0, endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {

        // Top row
        for (int i = startCol; i <= endCol; i++) {
            cout << arr[startRow][i] << " ";
        }
        startRow++;

        // Right column
        for (int i = startRow; i <= endRow; i++) {
            cout << arr[i][endCol] << " ";
        }
        endCol--;

        // Bottom row (if still valid)
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                cout << arr[endRow][i] << " ";
            }
            endRow--;
        }

        // Left column (if still valid)
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                cout << arr[i][startCol] << " ";
            }
            startCol++;
        }
    }

    return 0;
}
