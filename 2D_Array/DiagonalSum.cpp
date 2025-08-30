#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 8;
    int row = arr.size();
    int col = arr[0].size();
    
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
            else if (j == row - 1 - i)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }
    
    
    cout << sum1 + sum2;

    return 0;
    ;
}