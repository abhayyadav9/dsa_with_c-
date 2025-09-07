#include <iostream>
#include <vector>

using namespace std;

void getPermutation(vector<int> &arr, vector<vector<int>> &allPermutation, vector<int> &ans, int index)
{

    if (index == arr.size())
    {
        allPermutation.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        getPermutation(arr, allPermutation, ans, index + 1);
        swap(arr[i], arr[index]);
    }
};

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> allPermutation;
    vector<int> ans;

    getPermutation(arr, allPermutation, ans, 0);


      for(auto val:allPermutation){
        cout<<"{";
        for(int num:val){
            cout<<num<<",";
        }
        cout<<"}"<<endl;
    }

    return 0;
}