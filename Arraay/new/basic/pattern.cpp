#include<iostream>
using namespace std;
//triangle pattern
int triangle_partern(){
    int n= 5;
    for(int i =1 ; i<=n ;i++){
        for(int j=1; j<=i ; j++){
            cout<<" * ";
        };
        cout<<endl;
    }
}
//function for reverseed patern;
int reversed_triangle(){
    int n=6;
    for(int i= 1; i<=n;i++){
        for(int j= n; j>=i; j--){
            cout<<" * ";

        };
        cout<<endl;

    }
    return 0;
};

//side pattern;
int reversed_side(){
    int n= 5;
    for (int i=1; i<=n; i++){
        for(int k= n-1; k>=i;k--){
            cout<<" ";
        }
        for(int j =1 ;j<=i; j++){
            cout<<j;

        };
        for(int l=i; l>=2 ; l--){
            cout<<l-1;
        }
        cout<<endl;
    }
   
    return 0;
}

int hollow_diamond(){
    int n=4;
    for(int i =0 ; i<n; i++){
        
        for(int k = 0; k<n-i-1 ;k++){
            cout<<" ";
        }
        cout<<"+";

        if(i != 0){
            for(int j=0 ; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"+";
        }
       
        cout<<endl;
    }

    return 0;

}
int main(){
    // triangle_partern();
    // cout<<endl;
    // reversed_triangle();
    cout<<endl;
    // reversed_side();
    hollow_diamond();
    return 0;
};

