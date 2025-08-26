#include <iostream>
#include <vector>
using namespace std;

int main()
{ // two pointer approach
    vector<int> vect = {4, 5, 6, 2, 9};
    int n = vect.size();

    int start = 0;
    int end = n - 1;
    int mostwater = 0;
    while (start < end)
    {
        int height = min(vect[start], vect[end]);
        int width = -start + end;
        int area = width * height;
        mostwater = max(mostwater, area);

        if (vect[start] < vect[end])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout<<mostwater;
    return 0;
}