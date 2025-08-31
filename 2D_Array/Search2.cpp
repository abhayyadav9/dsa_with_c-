#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}};
    int target = 22;

    // take corner as the mid
    int m = arr.size();
    int n = arr[0].size();

    int start = 0, end = n - 1;
    bool isFound = false;

    while (start < m && end >= 0)
    {
        if (target == arr[start][end])
        {
            isFound = true;
        };

        if (target > arr[start][end])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout << isFound;
    return false;
}