#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 3, 6, 8, 3, 8};
    int n = arr.size();
    unordered_set<int> s;
    vector<int> dunplicate;
    int target = 9;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if (target == sum)
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}