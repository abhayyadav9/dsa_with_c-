#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect = {1, 2,3};
    int n = vect.size();

    vector<int> answer;
    
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)

        {

            if (i != j)
            {
                prod = prod * vect[j];
            }
        }
        answer.push_back(prod);
    }

    for(int nums: answer){
        cout<<nums<<",";
    }
    return 0;
}