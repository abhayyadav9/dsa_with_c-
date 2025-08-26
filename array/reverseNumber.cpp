// reverse the number using the swap funtion and two pointer approach

#include <iostream>
using namespace std;

int ReverseArray(int array[], int sz)
{
    int start = 0;
    int end = sz - 1;

    while (start < end)
    {
        swap(array[start], array[end]);
        start ++;
        end --;    }
}
int main()
{
    int array[] = {4, 5, 6, 8, 7, 9,1};
    int sz = 7;
    ReverseArray(array, sz);
    //revrse array
    for(int i=0; i <sz; i++){
        cout<<array[i]<< ',';
    }
    return 0;
}
