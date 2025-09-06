#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 4, 3, 6, 8, 3, 8};
    int n = arr.size();
    int target = 9;

    unordered_map<int, int> m;
    int prefixSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        // Case 1: whole prefix equals target
        if (prefixSum == target) count++;

        // Case 2: subarray found between two prefix sums
        if (m.find(prefixSum - target) != m.end()) {
            count += m[prefixSum - target];
        }

        // Update frequency of current prefixSum
        m[prefixSum]++;
    }

    cout << "Number of subarrays with sum " << target << " = " << count << endl;
    return 0;
}
