// WAF to calculate the sum and product of an array

// #include<iostream>
// using namespace std;

// int main(){
//     int array[]={1,2,5,8,4,1,3};
//     int sum=0;
//     int product=1;

//     for(int i =0; i<6; i++){
//         sum= sum + array[i];
//         product = product * array[i];
//     }
//     cout<<"The Sum of the array is :"<<sum<<endl;
//     cout<<"The product of the array is :"<<product <<endl;

//     return 0;
// }

// waf to swap the max and min number of the array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[] = {11, 22, 5, 8, 7, 1};
//     int minIndex = 0;
//     int maxIndex = 0;

//     for (int i = 0; i < 6; i++)
//     {
//         if (array[i] < array[minIndex])
//         {
//             minIndex = i;
//         }
//         if (array[i] > array[maxIndex])
//         {
//             maxIndex = i;

//         }
//     }
//     swap(array[minIndex], array[maxIndex]);

//     for (int i = 0; i < 6; i++)
//     {

//         cout << array[i] << " , ";
//     }

//     return 0;
// }

// waf to print all the unique values in an array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;

//     int array[size] = {5, 4, 5, 8, 6};

//     for (int i = 0; i < size; i++)
//     {
//         bool unique = true;

//         for (int j = 0; j < size; j++)
//         {

//             if (i != j && array[i] == array[j])
//             {

//                 unique = false;
//                 break;
//             }
//         }
//         if (unique)
//         {
//             cout << array[i];
//         }
//     }
//     return 0;
// }

// waf to print intersection of 2 array

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    int arr2[] = {5, 6,2, 7};
    int size2 = 4;

    for (int i=0; i < size1; i++)
    {

        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout <<arr2[j] << ",";
            }
        }
    }

    return 0;
}