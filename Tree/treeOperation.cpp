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


//find the height of tree



int height(Node* root){

    if(root == NULL) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) +1;


}


//coount the nimber of node in the tree

int count(Node* root){

    if(root== NULL) return 0;
     int left = count(root->left);
     int right = count (root->right);
    return left+ right + 1;
}

//total sum of the node data

 int sum(Node* root){
    if(root== NULL) return  0;

    int left= sum(root->left);
    int right=sum(root->right);

    return right + left + root->data;
 }


int main()
{

    vector<int> point = {5, 4, -1, -1, 6, 4, -1, -1, 2, -1, -1};

    Node *root = createTree(point);
    cout<<root->data<<endl;
    cout<<"the height of the data:"<< height<<endl;
    cout<<"the number of nopde is: "<<count(root)<<endl;
    cout<<"the sum of the node of the tree:" <<sum(root)<<endl;



    return 0;
}