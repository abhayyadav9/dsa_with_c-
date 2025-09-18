
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class list
{
    Node *head;
    Node *tail;

public:
    list()
    {
        head = tail = NULL;
    }
    // push from front
    
    void pushFront(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        // when linked list have already node;

        else
        {
            newNode->next = head;
            head = newNode;
        }
    }


    //print
    void print(){
        Node* temp = head;

        while(temp != NULL){

            cout<<temp->data<<"-->";
            temp = temp->next;

        }
    }


    void reverse(){
        Node* prev = NULL;
        Node* curr =head;
        Node* next = NULL;

        while(curr!= NULL){

            next = curr->next;
            curr->next =prev;

            prev =curr;
            curr=next;
        }
        head = prev;
    }

};


int main()
{
     list ll;
    ll.pushFront(5);
    ll.pushFront(2);
    ll.pushFront(6);
    ll.pushFront(5);
    ll.pushFront(2);
    ll.pushFront(9);
    ll.print();

    //revesing the list
    ll.reverse();

    cout<<endl;

    ll.print();

    

    return 0;
}