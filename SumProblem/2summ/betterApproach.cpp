#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> array = {1, 4, 7, 11, 15};
    int n = array.size();
    vector<pair<int, int>> ans;
    int target = 11;

    sort(array.begin(), array.end());

    int start = 0, end = n - 1;

    while (start < end)
    {
        int sum = array[start] + array[end];

        if (sum == target)
        {
            ans.push_back({array[start], array[end]});
            start++,
                end--;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    for (auto &p : ans)
    {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << "the number of pair is:" << ans.size();

    return 0;
}
