#include <iostream>
using namespace std;

int main()
{
    int array[] = {10, 25, 741, 10, 44, 66, 88, 7};
    int found = 0;

    for (int i = 0; i < 8; i++)
    {
        if (array[i] == 7)
        {
        
            found = i + 1;
        }
    };
    if (found == 0)
    {
        cout << "the element is not found in the array" << endl;
    }
    else
    {
        cout << "the position of the element is " << found;
    }
    return 0;
}