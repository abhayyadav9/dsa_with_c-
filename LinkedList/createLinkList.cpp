#include <iostream>
#include <vector>

using namespace std;
// class to create node

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

    // print the value
    void print()

    {

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "-"  << " --->";
            temp = temp->next;
        }
    }

    // push_back
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    // pop back

    int pop_front()
    {
        if (head == NULL)
        {
            cout << " List is empty" << endl;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    // pop back
    int pop_back()
    {
        Node *temp = head;

        if (head == NULL)
            return 0;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        int val = temp->next->data;
        delete temp->next;
        temp->next = NULL;
        tail = temp;
        return val;
    }

    // insert in middle;

    int insert(int val, int position)
    {

        if (position < 0)
        {
            return false;
        }
        if (position == 0){
            push_back(val);
            return 0;
        }

        Node *temp = head;

        for(int i=0 ; i<position-1; i++){
            temp = temp->next;
        }

        //create node
        Node* newNode = new Node(val);
        newNode ->next =temp->next;
        temp->next= newNode;

        if(temp==NULL){
            return false;
        }


    }



    //search

    int search (int val){
        Node* temp = head;
        int index=0;

        while(temp!= NULL){
             if(temp -> data == val){
                return index;
             }
             temp =temp->next;
             index++;
        }
        return -1;
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
    // push bACk

    ll.push_back(4445);

    // pop front
    ll.pop_front();

    // pop back
    ll.pop_back();

    //push in middle;

    ll.insert(10,3);


    
    
    ll.print();
    cout<<endl<<ll.search(10);
    return 0;
}
