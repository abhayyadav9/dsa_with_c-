#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 8;
    int row = arr.size();
    int col= arr[0].size();
    int maxSum =0;

    for(int i =0; i < row; i++){
        int sum =0;

        for(int j =0; j<col; j++){
            sum = sum + arr[i][j];

        }
        maxSum= max(maxSum,sum);
    }
    cout<<maxSum;


    return 0;

}