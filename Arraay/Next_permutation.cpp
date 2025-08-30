// find the next just higest number

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{

    vector<int> vec = {1, 2, 5, 4, 3};
    int n = vec.size();
    int pivot = -1;

    for (int i = n - 2; i >= 0; i--)
    {

        if (vec[i] < vec[i + 1])
        {
            pivot = i;
            break;
        }
    }

    //check if the array is in decending order

    if(pivot == -1){
        reverse(vec.begin(),vec.end());
    }

    // find the largetst number after the pivot element

    for (int j = n - 1; j > pivot; j--)
    {
        if (vec[pivot] <vec[j])
        {
            swap(vec[pivot], vec[j]);
            break;
        }
    }

    // reverse the remaining element
    int start = pivot + 1;
    int end = n - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        end--;
        start++;
    }

    for(int nums: vec){ 
    cout<<nums<<",";
    }

    return 0;
}