#include <iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter the age:";
    // cin >> n;
    // if (n >= 18) {
    //     cout << "YOu can vote: " << n << endl;
    // }else{
    //     cout << " You cannot vote";
    // }




    // //while loop
    // int i= 0;
    // while(i<100){
    //     cout << i<<endl;
    //     ++i;
    // }

    // for(int i=0; i<10 ;i++){
    //     cout << i<<endl;
    // }

    // int i=1;
    // int sum=0;
    // for (i; i<=5; i++){
    //     sum += i;
    // }
    // cout << sum << endl;


    // //print the sum of odd numbers
    // int num;
    // cout<<"enter the number:"<<endl;
    // cin>>num;
    // int sum =0;
    // for(int i=1; i<=num; i++){
    //     if(i%2 !=0){
    //         sum =sum + i;
    //     }
    // };
    // cout << sum << endl;


    //patern print
    int num=5;
    for (int k=1; k<=num; k++){
        for (int j=1 ; j<=k; j++){
            cout<<" *";
        };
        cout<<endl;

    }
    int num1 = 5;
    for (int i = 1 ; i<=num1; i++){
        for( int j = num ; j>=i; --j){
            cout << " *";
        }
        cout << endl;
    }


//opposite side patterns
int num2 = 5;
for (int i = 1; i <= num2; i++) {
    for (int j = num2; j > i; j--) {
        cout << "  ";
    }
    for (int k = 1; k <= i; k++) {
        cout << "* ";
    }
    cout << endl;
}

// ...existing code...

    return 0;
}