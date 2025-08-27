#include <iostream>
#include <vector>
using namespace std;

int findSingleEment(vector<int> array, int mid, int n, int start, int end)
{
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // check
        // when the array have only 3 element
        if (mid == 0 && array[0] != array[1])
            return array[mid];
        if (mid == n - 1 && array[mid - 1] != array[1])
            return array[mid];

        if (array[mid - 1] != array[mid] && array[mid + 1] != array[mid])
            return array[mid];

        if (mid % 2 == 0)
        { // when mid is even

            if (array[mid - 1] == array[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (array[mid - 1] == array[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> array = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    int n = array.size();
    int start = 0, end = n - 1;
    int mid;

    // checks
    if (n == 1)
        return array[0];

    cout << findSingleEment(array, mid, n, start, end);
    return 0;
}