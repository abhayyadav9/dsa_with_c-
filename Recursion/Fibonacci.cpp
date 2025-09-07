#include <iostream>

using namespace std;
int printFibbo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return printFibbo(n - 1) + printFibbo(n - 2);
}
int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << printFibbo(i) << " ";
    }
    return 0;
}