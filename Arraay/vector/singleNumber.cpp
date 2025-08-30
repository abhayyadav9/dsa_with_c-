//find the single non repeated number forn the array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array = {1, 5, 4, 5, 1,4,3};
    int ans = 0;
    for (int num : array)
    {

        ans ^= num;
    }
    
    cout << ans << endl;
    return 0;
}