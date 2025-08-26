#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vect = {1, 5, 6, 8, 7, -10};
    int n = 6;
    int maxSum = INT16_MIN;
    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;

        for (int end = start; end < n; end++)
        {
            currentSum= currentSum + vect[end];
            maxSum= max(maxSum,currentSum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}