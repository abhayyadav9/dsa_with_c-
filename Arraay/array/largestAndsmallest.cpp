
#include<iostream>
using namespace std;

int main(){
    int array[] ={41,6,67,9,66,67,7,-10};
    int smallest = INT16_MAX;

    int largest  =INT16_MIN;


    for(int i =0 ; i<8; i++){

        if(array[i]<smallest){
            smallest=array[i];
        }
        // smallest=(array[i],smallest);
        if(array[i]>largest){
            if(array[i]>largest){
                largest = array[i];
            }
        }
    }
    cout<<"the smallest number of the array "<<smallest<<endl;
    cout<<"the largest number of the array is "<<largest<<endl;
    return 0;
}