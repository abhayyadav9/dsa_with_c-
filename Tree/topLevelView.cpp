#include<iostream>
#include<vector>
#include<queue>
#include<map>


using namespace std;

class Node{
    public:
       int data;
       Node* left ;
       Node* right;

        Node(int val){
        data = val;
        left=right=NULL;
    }
};


static int index = -1;

Node* createTree (vector<int>point){
    index++;

    if(index <= point.size() && point[index] ==-1){
        return 0;
    }

    Node* root= new Node(point[index]);

    root->left = createTree(point);
    root->right = createTree(point);

    return root;

}

//top level view of the tree


void topLevel(Node* root){

    queue<pair<Node*, int>> q;

    map<int,int>mp;

    q.push({root,0});


    while(q.size() >0){

        Node* curr = q.front().first;
        int CurrHd = q.front().second;

        q.pop();

        //pushing the uniques and the first occurance of the value in themap funtion

        if(mp.find(CurrHd) == mp.end()){
            mp[CurrHd] = curr->data;
        }

        if(curr->left !=NULL){
            q.push({curr->left ,CurrHd -1});
        }


        if(curr->right != NULL){
            q.push({curr->right, CurrHd+1});
        }

    }

    for(auto it:mp){
        cout<<it.second<<",";
    }


}

int main(){
    vector<int> point = {5, 4, -1, -1, 6, 4, -1, -1, 2, -1, -1};

    Node* root = createTree(point);
    cout<<root-> data<<endl;

    topLevel(root);

    return 0;


}