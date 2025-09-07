#include <iostream>
#include <vector>
using namespace std;

void printSum(vector<int> vec, vector<vector<int>> &allSubset, vector<int> &ans, int i)
{

    if (i == vec.size())
    {
        allSubset.push_back(ans);
        return;
    }

    ans.push_back(vec[i]);
    printSum(vec, allSubset, ans, i + 1);

    ans.pop_back();
    printSum(vec, allSubset, ans, i + 1);
}
int main()
{
    vector<int> vec = {1, 2, 4, 6, 8};

    vector<vector<int>> allSubset;
    vector<int> ans;

    printSum(vec,  allSubset,ans, 0);

    for(auto val:allSubset){
        cout<<"{";
        for(int num:val){
            cout<<num<<",";
        }
        cout<<"}"<<endl;
    }

    return 0;
}