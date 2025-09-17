#include <iostream>
#include <vector>

using namespace std;
void bfs(vector<int> candidates, int target, int start, int n, vector<vector<int>> &   answer,
         vector<int>& current)
{

    if (target == 0)
    {
        answer.push_back(current);
        return;
    }

    if (target < 0)
        return;

    for (int i = start; i < n; i++)
    {
        current.push_back(candidates[i]);

        bfs(candidates, target - candidates[i], i, n, answer, current);
        current.pop_back();
    }
}

int main()
{
    vector<int> candidates = {1, 2, 3, 6, 7};
    int target = 7;

    int n = candidates.size();
    // unordered_set<int>s;
    int start = 0, end = start + 1;
    vector<vector<int>> answer;
    vector<int> current;

    bfs(candidates, target, start, n, answer, current);

        for (auto sub : answer)
    {
        for (int val : sub)
        {
            cout << val << ",";
        }
        cout << endl;
    }
    return 0;
};