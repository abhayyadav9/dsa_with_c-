#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {10, -5, -8, 11, 36, 66, -12, 55, 85};
    int n = vec.size();
    int k = 3; // window size;
    int start = 0, end = 0;
    int sum = 0;
    int maxValue = INT16_MIN;

    while (end < n)
    {

        sum = sum + vec[end];

        if (end - start + 1 < k)
        {
            end++;
        }
        else if (end - start + 1 == k)
        {
            maxValue = max(maxValue, sum);
            sum = sum - vec[start];
            start++;
            end++;
        }
    }
    cout << maxValue;

    return 0;
}