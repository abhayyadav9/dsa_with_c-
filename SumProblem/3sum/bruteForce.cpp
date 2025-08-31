#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> array = {1, 4, 7, 11, 15};
    int n = array.size();
    int target = 22;  // example target

    vector<vector<int>> ans; // store triplets

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = array[i] + array[j] + array[k];
                if (sum == target) {
                    ans.push_back({array[i], array[j], array[k]});
                }
            }
        }
    }

    // print triplets
    for (auto &triplet : ans) {
        cout << "(";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ",";
        }
        cout << ") ";
    }

    if (ans.empty()) cout << "No triplet found";

    return 0;
}
