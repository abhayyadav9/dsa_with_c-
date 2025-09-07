#include <iostream>
#include <vector>

using namespace std;

void uniqueSubset(vector<int>& vec, vector<int>& ans, vector<vector<int>>& allSubset, int i)
{

   if (i == vec.size())
    {
        allSubset.push_back(ans);
        return;
    }

    ans.push_back(vec[i]);
    uniqueSubset(vec, ans, allSubset, i + 1);

    ans.pop_back();
    int index = i + 1;

    while (index < vec.size() && vec[index] == vec[i])
    {

        index++;
    }
    uniqueSubset(vec, ans, allSubset, index);

}

int main()
{
    vector<int> vec = {1, 2, 2, 2, 3, 4, 5, 5};
    vector<int> ans;
    vector<vector<int>> allSubset;
    uniqueSubset(vec, ans, allSubset, 0);

   for(auto val:allSubset){
        cout<<"{";
        for(int num:val){
            cout<<num<<",";
        }
        cout<<"}"<<endl;
    }
    return 0;
}