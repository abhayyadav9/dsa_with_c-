#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> array = {1, 4, 7, 11, 15};
    int n = array.size();
    vector<pair<int, int>> ans;
    int target = 11;

    unordered_map <int,int> m;

    for(int i =0 ; i<n ; i++){
        int first= array[i];

        int second = target - first;

        if(m.find(second) != m.end()){
            ans.push_back({array[i],m[second]});
        }
        m[first]= i;
    }

     for (auto &p : ans)
    {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << "the number of pair is:" << ans.size();


    return 0;
}
