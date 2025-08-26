#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect = {1, 2, 3, 4};

    // insert int the array
    vect.push_back(5);

    // delete the last element
     vect.pop_back();

    // print front value
    cout << vect.front() << endl;

    // get element of particular index
    cout << vect.at(2) << endl;

    // geting size and capacity of the vector
    cout << "size of the vector " << vect.size() << endl;

    cout << "capacity of vecot " << vect.capacity() << endl;
    for (int num : vect)
    {
        cout << num << ",";
    }
    return 0;
}
