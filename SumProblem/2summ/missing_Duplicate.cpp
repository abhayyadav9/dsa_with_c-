#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>

using namespace std;
int main()
{
    vector<vector<int>> grid = {{1, 2, 3}, {3, 5, 6}, {7, 8, 9}};
    int n = grid.size();
    vector<int>ans;
    unordered_set<int>s;
    int actualSum = 0, exceptedSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actualSum = actualSum + grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
                int a =grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }

    exceptedSum = n*n * (n*n +1)/2;
    int b= exceptedSum- actualSum +ans[0];
    ans.push_back(b);

    for(int num: ans){
        cout<<num<<",";
    }

    return 0;
}