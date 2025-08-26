// linear search form the vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {5, 4, 7, 8, 9, 6, 3};
    int target = 9;
    for (int num = 0; num < vec.size(); num++)
    {
        if (vec[num] == target)
        {
            cout << "the Target value present at " << num;
        }
    }
    return 0;
}