#ifndef LIST_H // include guard (prevents multiple inclusions)
#define LIST_H

#include <iostream>
#include <vector>
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

class List
{
public:
    Node *head;
    Node *head2;

    Node *tail;
    Node *tail2;

public:
    List()
    {
        head = tail = NULL;
        head2 = tail2 = NULL;
    }

    void push(vector<int> vec)
    {
        for (int val : vec)
        {
            Node *newNode = new Node(val);

            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode; // attach to end
                tail = newNode;       // move tail
            }
        }
    }

    void push1(vector<int> vec)
    {
        head2 = NULL;
        for (int val : vec)
        {
            Node *newNode = new Node(val);

            if (head2 == NULL)
            {
                head2 = tail2 = newNode;
            }
            else
            {
                tail2->next = newNode; // attach to end
                tail2 = newNode;       // move tail
            }
        }
    }

    // create a cycle: tail points back to node at position `pos`
    // create a cycle: tail points back to node at position `pos` (0-based)
    void createCycle(int pos)
    {
        if (head == NULL || pos < 0)
            return;

        Node *temp = head;
        Node *cycleNode = NULL;
        int index = 0;

        while (temp != NULL)
        {
            if (index == pos)
                cycleNode = temp;
            if (temp->next == NULL)
                tail = temp; // last node
            temp = temp->next;
            index++;
        }

        if (cycleNode != NULL)
        {
            tail->next = cycleNode; // connect tail to that node
        }
    }

    // display the linked list (safe version, stops if too many nodes)
    void display()
    {
        Node *temp = head;
        int count = 0; // prevent infinite loop in case of cycle
        while (temp != NULL && count < 20)
        {
            cout << temp->data;
            if (temp->next != NULL)
                cout << " --> ";
            temp = temp->next;
            count++;
        }
        // cout << endl;
        // if (count == 50) {
        //     cout << "... (possible cycle detected)" << endl;
        // }
    }

    void display1()
    {

        Node *temp = head2;
        int count = 0; // prevent infinite loop in case of cycle
        while (temp != NULL && count < 20)
        {
            cout << temp->data;
            if (temp->next != NULL)
                cout << " --> ";
            temp = temp->next;
            count++;
        }
        // cout << endl;
        // if (count == 50) {
        //     cout << "... (possible cycle detected)" << endl;
        // }
    }
    // display after the cycle removal

    void displayCycle()
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data << endl;
        }
    }
};

#endif
