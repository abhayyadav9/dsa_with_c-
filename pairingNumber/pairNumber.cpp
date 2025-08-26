#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vect = {4, 5, 6, 2, 9, 8};
    vector<int> ans;
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans.push_back(vect[i]);
            ans.push_back(vect[j]);
            cout<<"["<<vect[i]<<","<<vect[j]<<"],";
        }
        cout<<endl;
    }
    return 0;
}