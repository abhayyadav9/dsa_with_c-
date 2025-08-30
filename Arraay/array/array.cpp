#include <iostream>
using namespace std;

// Function to find the maximum number in an array
int maximum(int a[], int b) {
    int max = a[0]; // Assume the first element is the maximum

    for (int i = 1; i < b; i++) {
        if (max < a[i]) {
            max = a[i]; // Update max if the current element is greater
        }
    }
    return max;```cpp


// #include <iostream>
// #include <climits> // For INT_MIN and INT_MAX

// using namespace std;

// // Function to find the maximum number in an array
// int maximum(int a[], int b) {
//     int max = INT_MIN; // Initialize max with the smallest possible integer value

//     for (int i = 0; i < b; i++) {
//         if (max < a[i]) {
//             max = a[i]; // Update max if the current element is greater
//         }
//     }
//     return max;
// }

// // Function to find the lowest number in an array
// int lowest(int a[], int b) {
//     int low = INT_MAX; // Initialize low with the largest possible integer value

//     for (int i = 0; i < b; i++) {
//         if (low > a[i]) {
//             low = a[i]; // Update low if the current element is smaller
//         }
//     }
//     return low;
// }

// // Function to find the sum of all elements in an array
// int sumOfAll(int a[], int b) {
//     int sum = 0;

//     for (int i = 0; i < b; i++) {
//         sum += a[i]; // Add each element to the sum
//     }
//     return sum;
// }

// int main() {
//     int b;
//     cout << "How many elements do you want to put in the array? " << endl;
//     cin >> b;

//     int* a = new int[b]; // Dynamically allocate memory for the array

//     // Populate the array with user input
//     for (int c = 0; c < b; c++) {
//         cout << "Enter the " << c << " element: " << endl;
//         cin >> a[c];
//     }

//     char res;
//     cout << "Do you want to insert more elements? Press (y/n)" << endl;
//     cin >> res;

//     while (res == 'y') {
//         b++; // Increase the count of elements
//         int* temp = new int[b]; // Dynamically allocate new memory for the array
//         for (int i = 0; i < b - 1; i++) {
//             temp[i] = a[i]; // Copy elements from the old array to the new array
//         }
//         delete[] a; // Deallocate the old array
//         a = temp; // Update the array pointer

//         cout << "Enter the " << b - 1 << " element: " << endl;
//         cin >> a[b - 1];

//         cout << "Do you want to insert more elements? Press (y/n)" << endl;
//         cin >> res;
//     }

//     // Find and display the greatest number in the array
//     int highest = maximum(a, b);
//     cout << "This is the highest number: " << highest << endl;

//     // Find and display the lowest number in the array
//     int low = lowest(a, b);
//     cout << "This is the lowest number: " << low << endl;

//     // Find and display the sum of all elements in the array
//     int sum = sumOfAll(a, b);
//     cout << "The sum of all elements in the array is: " << sum << endl;

//     // Display the array
//     cout << "The array is: " << endl;
//     for (int j = 0; j < b; j++) {
//         cout << a[j] << " ";
//     }
//     cout << endl;

//     delete[] a; // Deallocate the array
//     return 0;
// }
// ```
// }

// // Function to find the lowest number in an array
// int lowest(int a[], int b) {
//     int low = a[0]; // Assume the first element is the lowest

//     for (int i = 1; i < b; i++) {
//         if (low > a[i]) {
//             low = a[i]; // Update low if the current element is smaller
//         }
//     }
//     return low;
// }

// int main() {
//     int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Maximum element: " << maximum(arr, n) << endl;
//     cout << "Lowest element: " << lowest(arr, n) << endl;

//     return 0;
// }#include<iostream>
// using namespace std;

// // Function to find the greatest number in an array
// int greatest(int a[], int b) {
//     int max = a[0]; // Assume the first element is the maximum

//     for (int i = 1; i < b; i++) {
//         if (max < a[i]) {
//             max = a[i]; // Update max if the current element is greater
//         }
//     }
//     return max;
// }

// // Function to find the lowest number in an array
// int lowest(int a[], int b) {
//     int low = a[0];

//     for (int i = 1; i < b; i++) {
//         if (low > a[i]) {
//             low = a[i]; // Update low if the current element is smaller
//         }
//     }
//     return low;
// }

// // Function to find the sum of all elements in an array
// int sumOfAll(int a[], int b) {
//     int sum = 0;

//     for (int i = 0; i < b; i++) {
//         sum += a[i]; // Add each element to the sum
//     }
//     return sum;
// }

// int main() {
//     int b;
//     cout << "How many elements do you want to put in the array? " << endl;
//     cin >> b;

//     int a[100]; // Declare an array with a fixed size

//     // Populate the array with user input
//     for (int c = 0; c < b; c++) {
//         cout << "Enter the " << c << " element: " << endl;
//         cin >> a[c];
//     }

//     char res;
//     cout << "Do you want to insert more elements? Press (y/n)" << endl;
//     cin >> res;

//     while(res == 'y') {
//         cout << "Enter the " << b << " element: " << endl;
//         cin >> a[b];
//         b++; // Increase the count of elements

//         cout << "Do you want to insert more elements? Press (y/n)" << endl;
//         cin >> res;
//     }

//     // Find and display the greatest number in the array
//     int highest = greatest(a, b);
//     cout << "This is the highest number: " << highest << endl;

//     // Find and display the lowest number in the array
//     int low = lowest(a, b);
//     cout << "This is the lowest number: " << low << endl;

//     // Find and display the sum of all elements in the array
//     int sum = sumOfAll(a, b);
//     cout << "The sum of all elements in the array is: " << sum << endl;

//     // Display the array
//     cout << "The array is: " << endl;
//     for (int j = 0; j < b; j++) {
//         cout << a[j] << " ";
//     }
//     cout << endl;

// return 0;
// }

