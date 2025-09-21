#include <iostream>
#include "listclass.h"

using namespace std;

int main()
{
    List mylist;
    vector<int> vec = {5, 6, 8, 2, 35, 1,9,4,4};
    mylist.push(vec);
    mylist.createCycle(5);
    mylist.display();
    cout<<endl;
    Node* slow=mylist.head;
    Node* fast =mylist.head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast =fast->next->next;

    }
    cout<<slow->data;

    

    return 0;
}