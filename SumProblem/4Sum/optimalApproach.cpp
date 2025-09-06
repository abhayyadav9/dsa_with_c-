#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> array = {0, 1, 4, 7, 11, 15,0, 1, 4, 7, 11, 15, 1, 4, 7, 11, 15,0, 1, 4, 7, 11, 15};
    sort(array.begin(), array.end());
    int n = array.size();
    int target = 23; // example target
    vector<vector<int>> v;

    sort(array.begin(), array.end()); // sorting helps avoid duplicates

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int start = j + 1, end = n - 1;

            while (start < end)
            {
                int sum = array[i] + array[j] + array[start] + array[end];

                if (sum == target)
                {
                    v.push_back({array[i], array[j], array[start], array[end]});
                    start++;
                    end--;
                }
                else if (sum < target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
    }

    // print result
    for (auto quad : v) {
        cout << "(";
        for (int i = 0; i < quad.size(); i++) {
            cout << quad[i];
            if (i < quad.size() - 1) cout << ", ";
        }
        cout << ") ";
    }

    return 0;
}
