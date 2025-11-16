#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{

    vector<int> prices = {100, 80, 60, 75, 85, 60, 90};
    int n = prices.size();
    vector<int> span(n);

    stack<int> s;
    span[0] = 1;
    s.push(0);

    for (int i = 1; i < n; i++)
    {

        while (!s.empty() && prices[s.top()] <= prices[i])
        {
            s.pop();
        }

        span[i] = s.empty() ? i + 1 : i - s.top();

        s.push(i);
    }

    for (int n = 0; n < span.size(); n++)
    {
        cout << span[n] << ",";
    }

    return 0;
}