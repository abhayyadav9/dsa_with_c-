#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vec, int start, int end, int target)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;

        if (vec[mid] == target)
            return mid;
        else if (vec[mid] > target)
            return binarySearch(vec, start, mid - 1, target);
        else
            return binarySearch(vec, mid + 1, end, target);
    }
    return -1; // not found
}

int main()
{
    vector<int> vec = {1, 3, 8, 12, 45, 90};
    int target = 8;
    int start = 0, end = vec.size() - 1;

    int result = binarySearch(vec, start, end, target);

    if (result != -1)
        cout << "Found at index: " << result;
    else
        cout << "Not found";

    return 0;
}
