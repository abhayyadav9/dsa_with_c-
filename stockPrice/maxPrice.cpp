#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {5, 2, 5, 8, 9, 1};
    int n = vec.size();
    int maxProfit = 0;
    int buy = vec[0];
    int sell = vec[0];

    for (int i = 0; i < n; i++)
    {

        if (vec[i] - buy > maxProfit)
        {
            maxProfit = vec[i] - buy;
            sell = vec[i];
        }
        if (vec[i] < buy)
        {
            buy = vec[i];
        }
    }
    cout<<"max profit :"<<maxProfit<<endl;
    cout<<"buy at :"<<sell-maxProfit<<endl;
    cout<<"sell At :"<<sell;
    return 0;
}