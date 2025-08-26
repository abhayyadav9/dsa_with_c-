#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect = {4, 5, 6, 2, 9};
    int n = vect.size();

    int mostwater = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j =i+1; j < n; j++)
        {
            int width = j-i;
            int height = min(vect[i],vect[j]);
            int area = height *width;
            mostwater = max(mostwater,area);
        }
    }
    cout<<"the container having most water is:"<<mostwater<<endl;
    return 0;
}
