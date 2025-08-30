// in optimaztion short the aarray first;

// time complexity o(nlogn)

#include <iostream>
#include <vector>
#include <algorithm> // required for sort()

using namespace std;

int main()

{
    vector<int> vect = {1, 2, 1, 2, 1, 2,2,2,2,2, 1, 1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};
int n = vect.size();

    sort(vect.begin(), vect.end());

    int freq = 1;
    for (int i = 1; i < n; i++)
    {
        if (vect[i] == vect[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
        }

        if (freq > n / 2)
        {
            cout << "Majority element: " << vect[i] << endl;
            return 0; // Exit after finding the majority
        }
    }

    cout << "No majority element found" << endl;
    return 0;
}