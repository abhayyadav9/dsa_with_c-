// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {

//     vector<int> arr = {5, 6, 8, 22, 6, 20, 9, 8, 1};
//     int k = 3; // window size;
//     int n = arr.size();

//     int start = 0, end = 0;

//     int maxVal = INT16_MIN;
//     vector<int> ans;

//     while (end < n)
//     {
//         maxVal = max(arr[end], maxVal);

//         if (end - start + 1 < k)
//         {
//             end++;
//         }
//         else if (end - start + 1 == k)
//         {
//             ans.push_back(maxVal);

//             // now sliding the wind0w

//             if (maxVal == arr[start])
//             {
//                 maxVal = INT16_MIN;
//                 for (int i = start + 1; i <= end; i++)
//                 {
//                     maxVal = max(arr[i], maxVal);
//                 }
//             }
//             start++;
//             end++;
//         }
//     }

//     for (int val : ans)
//     {
//         cout << val << ",";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> arr = {5, 6, 8, 22, 6, 20, 9, 8, 1};
    int k = 3; // window size;
    int n = arr.size();
    list<int> q;

    int start = 0, end = 0;

    int maxVal = INT16_MIN;
    vector<int> ans;

    while (end < n)
    {
        maxVal = max(maxVal, arr[end]);

      
        while(!q.empty() && q.back() < arr[end]){
            q.pop_back();
        }
        q.push_back(arr[end]);




        if (end - start + 1 < k)
        {
            end++;
        }
        else if (end - start + 1 == k)
        {
            ans.push_back(maxVal);

            //sliding the window



            if(!q.empty() && arr[start] == q.front()){
                q.pop_front();
                maxVal= q.front();
            }
            start++;
            end++;
        }

        /* code */
    }


    for(int val: ans){
        cout<<val<<" ,";
    }

    return 0;
}