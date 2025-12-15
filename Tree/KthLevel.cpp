#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
     int data;
     Node* left;
     Node* right;

    Node(int val){
        data =val;
        left=right=NULL;

    }
};
static int index=-1;

Node* createTree(vector<int>point){

    index ++;
    if(index <=  point.size() && point[index] ==-1){
        return 0;
    }

    Node* root = new Node(point[index]);

    root->left = createTree(point);
    root->right = createTree(point);

    return root;
}

void kthLevel(Node* root, int k){
    if(root == NULL) return ;

    if(k==1){
        cout<<root->data<<",";
        return;
    }

    kthLevel(root->left, k-1);
    kthLevel(root->right, k-1);

}


int main(){
    vector<int> point = {5, 4, -1, -1, 6, 4, -1, -1, 2, -1, -1};

    Node* root = createTree(point);

    cout<<root->data<<endl;

    kthLevel(root,3);
    return 0;

}