#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 8;
    int row = arr.size();
    int col= arr[0].size();

    for(int i = 0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j]== target){
                cout << "Found" << endl;
                return 0;
            }
        }
    }
    cout << "Not Found" << endl;
    return 0;
}