#include <iostream>
#include <vector>
using namespace std;

int searchTarget(vector<int> arr, int n, int target)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == arr[mid])
        {
            return mid;
        }

        if (arr[start] <= arr[mid]){ // left side shorted

            if(arr[start] <= target && target <= arr[mid]){
                end = mid -1;

            }else{
                start =mid+1;
            }

        }else{
            if( arr [end] >=target && target >= arr[mid])
            {
                start = mid +1;
            }else{
                end = mid-1;
            }

        }
    }
}

int main()
{
    vector<int> arr = {8, 9, 0, 1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int target = 6;
    cout << searchTarget(arr, n, target);
    return -1;
}