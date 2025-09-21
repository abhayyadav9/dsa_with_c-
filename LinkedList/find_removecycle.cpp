#include<iostream>
#include<vector>
#include "listClass.h"
using namespace std;

int main(){

    vector<int> vec={2,5,4,7,8,6,3};
    List mylist;

    mylist.push(vec);
    mylist.display();
    cout<<endl;
    mylist.createCycle(2);
    mylist.display();

    //detect and remove the loop

    Node *slow = mylist.head;
    Node *fast = mylist.head;


    bool isCycle =false;

    while(fast!=NULL && fast->next!=NULL){

        slow = slow->next;
        fast= fast->next->next;
        if(slow== fast){
            isCycle=true;
           break;
        }

    }

    if(!isCycle) return 0;
    slow =mylist.head;
    Node* prev=0;

    while(slow!= fast){
        slow= slow->next;
        prev= fast;
        fast=fast->next;
    }
    cout<<"the Cycle is start from "<<slow->data<<endl;

    //remove the the cycle;
    prev->next= NULL;
    cout<<endl<<" the cycle is removed"<<endl;

    mylist.display();



    return 0;
}