#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    vector<int> array = {1, 4, 7, 11, 15};
    int n = array.size();
    int target = 23; // example target
    set<vector<int>> uniqueTriplet;

    for (int i = 0; i < n; i++) {
        set<int> s; 
        int tar = target - array[i]; // ✅ correct formula

        for (int j = i + 1; j < n; j++) {
            int third = tar - array[j]; 
            if (s.find(array[j]) != s.end()) { 
                vector<int> trip = {array[i], array[j], third};
                sort(trip.begin(), trip.end()); 
                uniqueTriplet.insert(trip); 
            }
            s.insert(third); 
        }
    }

    // Print all unique triplets
    for (auto triplet : uniqueTriplet) {
        cout << "(";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << ") ";
    }

    return 0;
}
