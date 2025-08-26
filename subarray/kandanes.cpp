#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect = {1, 5, 6, 8, 7, -9};
    int n = vect.size();

    int currentSum = 0;
    int maxSum = INT16_MIN; 

    for (int i = 0; i < n; i++)
    {

       currentSum = currentSum + vect[i];
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout<<maxSum;

    return 0;
}