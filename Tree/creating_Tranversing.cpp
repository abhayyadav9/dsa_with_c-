#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int ind = -1;

Node *createTree(vector<int> &point)
{
    ind++;

    if (ind >= point.size() || point[ind] == -1)
        return NULL;

    Node *root = new Node(point[ind]);

    root->left = createTree(point);
    root->right = createTree(point);

    return root;
}

// preoder transeversel

void preorder(Node *root)
{

    if (root == NULL)
        return;

    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);

    cout << root->data;
}

void inorder(Node *root)
{

    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

// level order breadth first search

void levelorder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    // q.push(NULL);

    while (q.size() >0)
    {

        Node *curr = q.front();

        q.pop();

        cout<<curr->data<<",";

        // if (curr == NULL)
        // {
        //     if (!q.empty())
        //     {
        //         cout << endl;
        //         q.push(NULL);
        //         continue;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }

        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}
int main()
{

    vector<int> point = {5, 4, -1, -1, 6, 4, -1, -1, 2, -1, -1};

    Node *root = createTree(point);

    cout << root->data << endl;
    cout << "preOrder: ";
    preorder(root);

    cout << endl
         << "postOrder :";

    postorder(root);

    cout << endl
         << "inOrder :";

    inorder(root);

    cout << endl
         << "the bfs :";
    levelorder(root);

    return 0;
}