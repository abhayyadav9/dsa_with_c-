#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {4, 8, 7, 5, 2};
    int n = vec.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int prod = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod = prod * vec[j];
            }
        }
        ans.push_back(prod);
    }

    for (int num : ans)
    {
        cout << num << endl;
    }
    return 0;
}