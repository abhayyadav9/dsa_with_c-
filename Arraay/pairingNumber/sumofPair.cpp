#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vect, int target)
{
    vector<int> answer;

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = i + 1; j < vect.size(); j++)
        {
            if (vect[i] + vect[j] == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
    }

    // If no pair found, return empty vector
    return answer;
}

int main()
{
    vector<int> vect = {2, 5, 7, 8, 9, 3};
    int target = 11;
    vector<int> ans = pairSum(vect, target);

    if (!ans.empty())
    {
        cout << ans[0] << "," << ans[1] << endl;
    }
    else
    {
        cout << "No pair found" << endl;
    }

    return 0;
}
