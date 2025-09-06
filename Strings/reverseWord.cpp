#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "my name is abhay";
    int n = str.length();
    string ans = " ";

    reverse(str.begin(), str.end());

    cout << str<<endl;

    for (int i = 0; i < n; i++)
    {
        string word = " ";
        while (i < n && str[i] != ' ')
        {
            word = word + str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans = ans + " " + word;
        }
    }

    cout<< ans.substr(2);

    return 0;
}