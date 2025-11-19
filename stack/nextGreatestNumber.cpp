#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    vector<int> nums = {40, 50, 10, 55, 15, 20, 25};

    int n = nums.size();
    stack<int> st;
    vector<int> ans(n,0);

    for (int i = n - 1; i >= 0; i--)
    {

        while ( !st.empty() && st.top() <= nums[i])
        {
            st.pop();
        }

        ans[i] = st.empty() ? -1 : st.top();

        st.push(nums[i]);
    }

    for (int i : ans)
    {
        cout << i << ",";
    }

    return 0;
}