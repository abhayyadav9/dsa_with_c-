#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getPermutation(string str, vector<string> &ans, int i)
{

    if (i == str.length())
    {
        ans.push_back(str);
        return;
    }
    for (int j = i; j < str.length(); j++)
    {
        swap(str[j], str[i]);
        getPermutation(str, ans, i + 1);
        swap(str[j], str[i]);
    }
}

int main()
{

    string str = "abc";
    vector<string> ans;

    getPermutation(str, ans, 0);

    for (string val : ans)
    {
        cout << val << ",";
    }

    return 0;
}