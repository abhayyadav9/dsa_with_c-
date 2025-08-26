#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 1;
    // total number of sum
    int totalNumber =0;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {

            for (int k = i; k <j; k++)
            {

                cout << vec[k];
            }
            totalNumber++;
            cout<<" ";
        }
        cout<<endl;
    }
    if(totalNumber == (n*n+n)/2){
        cout<<"Total number of subarray is "<<totalNumber;
    }else{
        cout<<" not matching total number of sub array  "<<totalNumber;
    }

    return 0;
}