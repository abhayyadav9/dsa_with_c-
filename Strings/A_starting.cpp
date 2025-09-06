#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str1= "apna college";
    reverse(str1.begin(), str1.end());
    cout<<str1<<endl;
    cout<<str1.length();
    cout<<endl;

    //get input
    getline(cin,str1);
    return 0;
}