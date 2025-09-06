#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 3, 6, 9, 3, 8};
    int n = arr.size();
    unordered_set<int> s;
    vector<int> dunplicate;
    int slow = 0;
    int fast = 0;

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];

    } while (slow != fast);

    slow=arr[0];

    while(slow!= fast){
        slow= arr[slow];
        fast=arr[fast];
    }

    cout<<slow;
    return 0;
}