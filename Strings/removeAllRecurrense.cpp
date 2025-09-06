#include<iostream>
#include<string>

using namespace std;

int main(){

    string s ="daabccabc";
    string removwPart ="abc";

    while(s.length() >0 && s.find(removwPart) < s.length() ){
        s.erase(s.find(removwPart),removwPart.length());
    }
    cout<<s<<endl;
    return 0;
}