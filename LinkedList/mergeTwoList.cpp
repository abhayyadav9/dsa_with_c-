#include <iostream>
#include "listclass.h"
#include <vector>
#include <algorithm>

using namespace std;

Node*  mergeList(Node *h1, Node *h2)
{

    if (h1 == NULL || h2 == NULL)
    {
        return h1 == NULL ? h2 : h1;
    }

    if(h1->data <=h2->data){
        h1->next=mergeList(h1->next,h2);
        return h1;

    }else{
        h2->next = mergeList(h1,h2->next);
        return h2;
    }

    return 0;
}

int main()
{
    List ll;
    vector<int> l1 = {1, 5, 6, 8, 7};
    vector<int> l2 = {2, 6, 8, 7, 9};
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    ll.push(l1);
    ll.display();

    ll.push1(l2);
    cout << endl;
    ll.display1();

    Node *h1 = ll.head;
    Node *h2 = ll.head2;

    mergeList(h1, h2);
    cout << endl;
    ll.display();
     

    return 0;
}