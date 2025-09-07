#include <iostream>
#include <vector>
using namespace std;

int printEven(vector<int> arr, int i)
{
    if(arr.size()-1 <= i){
        cout<<arr[i];
        return 0 ;
    }
   cout<<arr[i]<<",";
   printEven(arr, i+1);
    return 0;
}
int main()
{
    vector<int> arr = {1, 2, 3, 7, 8, 10, 12};
    int i = 0;
    printEven(arr, i);
    return 0;
}