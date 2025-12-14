#include<iostream>
#include<vector>
using namespace std;

int partition( vector<int> &nums, int start, int end){

    int index = start -1;
    int pivot = nums[end];

    for(int i =start ; i <end; i++){

        if( nums[i] <= pivot){
            index++;
            swap(nums[i], nums[index]);
        }
    }

    index ++;
    swap(nums[index], nums[end]);

    return index;
}

void quickSort( vector<int> &nums, int start, int end){

    if(start < end){
        int index = partition(nums, start,end);
        quickSort(nums, start, index-1);// for left part
        quickSort(nums, index +1, end);
    }

}

int main(){

    vector<int> nums ={5,1,1,2,0,0};
    int n = nums.size();
    int start =0, end = n-1;

    quickSort(nums,start,end);

    for(int n :nums){
        cout<<n<<",";
    }

    return 0;
}