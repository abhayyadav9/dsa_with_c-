#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 8, 7, 5, 2};
    int n = nums.size();
    vector<int> answer(n, 1);

    // Compute prefix products
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Compute suffix products and multiply
    int suffix = 1;
    for (int j = n - 1; j >= 0; j--) {
        answer[j] = answer[j] * suffix;
        suffix *= nums[j];
    }

    for(int n:answer){
    cout<<n<<" ,";
    }
}