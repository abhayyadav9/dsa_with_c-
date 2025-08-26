#include <iostream>
#include <vector>
#include <algorithm> // Added for sort

using namespace std;

int BinarySearch(vector<int> array, int target)
{
    int start = 0, end = array.size() - 1; // FIXED: end should be array.size() - 1

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == target)
            return mid;

        if (array[mid] > target)
        {
            end = mid - 1;
        }
        if (array[mid] < target)
        {
            start = mid + 1;
        }
    }
    return -1; // FIXED: return -1 if not found
}
int main()
{
    vector<int> array = {1, 2, 3, 4, 5};
    int target = 3;
    sort(array.begin(), array.end()); // FIXED: sort the array before binary search
    cout << "The target is found at " << BinarySearch(array, target) << " index" << endl;

    return 0;
}