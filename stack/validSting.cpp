#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str = "[{{({[]})}]}";
    stack<char> s;
    int n = str.size();
    bool status = true;

    for (int i = 0; i < n; i++)
    {

        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty())
            {
                status = false;
                break;
            }

            if (
                (str[i] == ')' && s.top() == '(') ||
                (str[i] == '}' && s.top() == '{') ||
                (str[i] == ']' && s.top() == '['))

            {
                s.pop();
            }
            else
            {
                status = false;
                break;
            }
        }
    }

    if (!s.empty())
    {
        status = false;
    }

    cout << status;

    return 0;
}