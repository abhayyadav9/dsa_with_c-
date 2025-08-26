// #include<iostream>
// using namespace std;

// int main(){
//     int array[5]= {2,1,5,8,6};
//     cout<< "this is the first programm"<<endl;
//     for (int i =0 ; i<=5; i++){
//         cout<<"this is"<<i<<"element of the array  "<<array[i]<<endl;
//     }
//     return 0;
// }

//print the sum of the all array elememt

// #include<iostream>

// using namespace std;
// int main(){
//     string name[]={"abhay","aradhya","aprajeeta","atharv","rohan"};

//     for ( int i =0 ;i<sizeof(name); i++ ){
//     cout<<"the "<< i <<" element of the array is "<<name[i]<<endl;
//     }
//     return 0;

// }

//print the pattern


#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=0;i<n;i++){
    for(int j=n;j>0;j--){
        cout<<" * ";
    };
    cout<<endl;

}
    return 0;
}
