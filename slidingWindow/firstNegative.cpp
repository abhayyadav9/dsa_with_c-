#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    vector<int> vec = {10, -5, -8, 11, 36, 66, -12, 55, 85};
    cout << "expected Out Put " << "-5,-5,-8,-12,-12,-12" << endl;
    int n = vec.size();
    int k = 3; // window size;
    int start = 0, end = 0;
    queue<int> q;
    vector<int> ans;

    while (end < n)
    {
        if (vec[end] < 0)
        {

            q.push(vec[end]);
        }

        if (end - start + 1 < k)
        {

            end++;
        }
        else if (end - start + 1 == k)
        {
            if (q.empty())
            {
                ans.push_back(0);
            }
            else{
                ans.push_back(q.front());
            }

            // calculation

            if (!q.empty() && vec[start] == q.front())
            {
                q.pop();
            }

            start++;
            end++;
        }
    }

    for (int val : ans)
    {
        cout << val << ",";
    }

    return 0;
}