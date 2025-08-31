#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &arr, int target) {
    int row = arr.size();
    if (row == 0) return false;
    int col = arr[0].size();
    if (col == 0) return false;

    int startRow = 0, endRow = row - 1;

    // First, find the row where the target could exist
    while (startRow <= endRow) {
        int midRow = startRow + (endRow - startRow) / 2;

        if (target >= arr[midRow][0] && target <= arr[midRow][col - 1]) {
            // Target is in this row
            int startCol = 0, endCol = col - 1;
            while (startCol <= endCol) {
                int midCol = startCol + (endCol - startCol) / 2;

                if (arr[midRow][midCol] == target)
                    return true;
                else if (arr[midRow][midCol] < target)
                    startCol = midCol + 1;
                else
                    endCol = midCol - 1;
            }
            return false; // Not found in the row
        } else if (target < arr[midRow][0]) {
            endRow = midRow - 1;
        } else { // target > arr[midRow][col - 1]
            startRow = midRow + 1;
        }
    }

    return false; // Not found in any row
}

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 9;

    if (searchMatrix(arr, target))
        cout << "Found!" << endl;
    else
        cout << "Not Found!" << endl;

    return 0;
}
