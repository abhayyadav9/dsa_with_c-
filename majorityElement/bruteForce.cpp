// find the majority element from the array
// the number is majority only when more than half of the lement is same
// time complexit is n power 2

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vect = {1, 2, 1,1, 3, 6, 2, 2, 2};
    int n = vect.size();

    int frequency = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (vect[j] == vect[i])
            {
                frequency++;
            }
        }
        if(frequency >  n/2){
            cout<<"the highest frequency of the element is : "<<vect[i];
            break;
        }
    }

    

    return 0;
}
