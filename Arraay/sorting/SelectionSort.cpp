// first  select the smallest element of the array and place at the starting
//  run the loop on the unsorted part
// iteration  n-1 times
//  time complexity is n2;

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array = {4, 2, 5, 7, 6};
    int n = array.size();

    for (int i = 0; i < n - 1; i++)
    {
        // assusme the fo=iirst element index is smallest
        int smalestIndex = i;

        for (int j = i; j < n; j++)
        {

            if (array[smalestIndex] < array[j])
            {
                smalestIndex = j;
            }
        }
        swap(array[smalestIndex], array[i]);
    }

    for (int num : array)
    {
        cout << num << " ,";
    }
    return 0;
}