#include <iostream>
#include <vector>
using namespace std;

void printSum(vector<int> vec, vector<int> ans, int i)
{

    if (i == vec.size())
    {

        for (int val : ans)
        {
            cout << val << ",";
        }
        cout<<endl;
        return ;
    }

    ans.push_back(vec[i]);
    printSum(vec, ans, i + 1);
    ans.pop_back();
    printSum(vec, ans, i + 1);
}

int main()
{
    vector<int> vec = {1, 2, 4, 6, 8};

    vector<int> ans;
    printSum(vec, ans, 0);

    return 0;
}