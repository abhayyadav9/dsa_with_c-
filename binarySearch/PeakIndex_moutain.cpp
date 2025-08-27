#include <iostream>
#include <vector>
using namespace std;

int  searchPeakIndex(vector<int> array, int n)
{

    int start = 0, end = n - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (array[mid - 1] <= array[mid] && array [mid] >= array[mid + 1])
            return array[mid];

        if (array[mid] > array[mid + 1])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}
int main()
{
    vector<int> array = {1, 4, 6,10, 5, 2, 1, 0};
    int n = array.size();
    cout<<searchPeakIndex(array, n) ;
    return 0;
}