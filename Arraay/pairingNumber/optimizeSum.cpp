// two pointer appreoach

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect = {1, 4, 5, 8, 7, 9};
    vector<int> answer;
    int n =6;
    int target = 12;
    int start = 0;
    int end = n - 1;

    while (start < end)

    {
        int pairSum = vect[start] + vect[end];
        if (pairSum == target)
        {
            answer.push_back(start);
            answer.push_back(end);
            break;
        }

        if (pairSum > target)
        {
            end--;
        }
        else if (pairSum < target)
        {
            start++;
        }
    }

    cout << answer[0] << "," << answer[1] << endl;
    return 0;
}