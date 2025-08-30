// number of iteration = n-1
// compare with adjacent element
//  push the largest at the last
// time complexity is n square

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> array = {4, 2, 5, 7, 6};
    int n = array.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;

        for (int j = i + 1; j < n; j++)
        {

            if (array[i] < array[j]) // decending order
            {
                swap(array[i], array[j]);
                isSwap = true;
            }
        }
        // if (!isSwap)
        // {
        //     // string message = "the Element is already  sorted";
        //     // cout << message;
        //     // break;
        //     return 
        // }
    }

    for (int num : array)
    {
        cout << num << ",";
    }
    return 0;
}