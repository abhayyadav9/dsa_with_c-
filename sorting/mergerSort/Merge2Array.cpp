// leetcode problem number 88

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> A = {2, 5, 7, 0, 0, 0};
    int m = 3;
    vector<int> B = {
        1,
        2,
        5,
    };
    int n = 3;

    int index = m + n - 1;
    int i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)

    {
        if (A[i] >= B[j])
        {
            A[index] = A[i];
            index--;
            i--;
        }
        else
        {
            A[index] = B[j];
            index--;
            j--;
        }
    }

    // if the element of b is left then

    while (j >= 0)
    {
        A[index] = B[j];
        index--;
        j--;
    }

    for (int num : A)
    {
        cout << num << " ,";
    }

    return 0;
}