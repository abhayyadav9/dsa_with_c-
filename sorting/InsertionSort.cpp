// break the array in two part sorted and unserted
//  at starting assume the first element is sorted and other is unsorted
//  then the pick first element from the unsorted array and compare with the element on the sorted array and placed at appropriate place;

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array = {4, 2, 5, 7, 6};
    int n = array.size();

    for (int i = 1; i < n; i++)
    {

        int current = array[i];
        int prev = i - 1;
        while (prev >= 0 && array[prev] > current)
        {

            array[prev + 1] =array[prev];
            prev--;
        }
        array[prev + 1] = current;
    }

    
    for (int num : array)
    {
        cout << num << " ,";
    }
    return 0;
}