#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = arr.size();
    int col = arr[0].size();
    int n = row;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i][i];
        if (i != n - 1 - i)
        {
            sum = sum + arr[i][n - 1 - i];
        }
    }
    cout << sum;
    return 0;
}