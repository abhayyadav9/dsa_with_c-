#include<iostream>
#include<vector>

using namespace std;

int main(){
    int x =5;
    int power =3;
    int n= power;
    int binform =n;
    int ans =1;
    while(binform >0){
        if(binform %2== 1){
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    cout<<ans;
    return 0;

}
