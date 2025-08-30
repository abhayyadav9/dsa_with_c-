#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> array, int m, int n, int mid)
{
    // now allocating the arrea
    int maxAllocation = mid;
    int painters = 1, days = 0;

    if (m > n)
        return false;

    for (int i = 0; i < n; i++)
    {
        if (days + array[i] <= maxAllocation)
        {
            days = days + array[i];
        }
        else
        {
            painters++;
            days = array[i];
        }
    }

    return painters <= m ? true : false;
}

int painterAllocation(vector<int> array, int m, int n)
{
    // the range of the possible array is between 40 to the sum of the array;
    int start = 0, end = 0;
    for (int i = 0; i < n; i++)
    {

        start = max(start, array[i]);
        end = end + array[i];
    }
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(array, m, n, mid))
        {

            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}
int main()
{
    vector<int> array = {5, 10, 20, 30}; // no. of time to paint

    int m = 2; // painter
    int n = array.size();

    cout << painterAllocation(array, m, n);

    return 0;
}