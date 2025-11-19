#include <iostream>

using namespace std;

int main()
{
    int a=9;
    cout << "enter the number table you want print:";
    cin >> a;

    for (int i = 1; i <= 10; i++)
    {

        cout<<a<< "*" <<i <<"="<<i*a <<endl;
    }

    return 0;
}