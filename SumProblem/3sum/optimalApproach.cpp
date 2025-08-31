#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array = {1, 4, 7, 11, 15};
    int n = array.size();
    int target = 23; // example target

    vector<vector<int>> ans; // store triplets

    for (int i = 0; i < n; i++)
    {

        int start = i + 1, end = n - 1;

        while (start < end)
        {
            int sum = array[i] + array[start] + array[end];
            if(target == sum){
                ans.push_back({array[i], array[start], array[end]});
                break;
            }
            else if(sum> target){
                end--;
            }else{
                start ++;
            }
        }
    }

     for (auto &triplet : ans) {
        cout << "(";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ",";
        }
        cout << ") ";
    }


    return 0;
}