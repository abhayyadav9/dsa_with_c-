#include<iostream>
#include "listclass.h"
#include<vector>


using namespace std;

int main(){
    vector<int>vec={1,5,9,11,33,8};
    List mylist;
    mylist.push(vec);
    mylist.display();
    cout<<endl;
    mylist.createCycle(3);
    mylist.display();

    //now finding the cycle;

    Node *slow = mylist.head;
    Node *fast = mylist.head;

    bool isCycle= false;

    while(fast != NULL && fast->next !=NULL){
        slow= slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<" there is loop";
            return 0;
        }

    }

   


    return 0;
}