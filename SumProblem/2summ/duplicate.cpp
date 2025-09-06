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

    for (int i = 0; i < n; i++)
    {

        if (s.find(arr[i]) != s.end())
        {
            dunplicate.push_back(arr[i]);
        }
        s.insert(arr[i]);
    }


    for (int num : dunplicate)
    {

        cout << num << ",";
    }

    return 0;
}
