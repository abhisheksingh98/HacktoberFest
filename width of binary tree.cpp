#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct node{
    int data;
    struct node*left;
    struct node*right;
// constructor
    node(int val){
        data=val;
        left=right=NULL;
    }
};


int widthOfBinaryTree(struct node* root) {
        int ans=0;
        queue<pair<struct node*,int>>q;
        if(root==NULL) return 0 ;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            int min=q.front().second;
            int f=0,l=0;
            for(int i=0;i<size;i++){
                int curr_id=q.front().second-min;
                struct node*curr=q.front().first;
                q.pop();
                if(i==0) f=curr_id;
                if(i==(size-1)) l=curr_id;
                if(curr->left) q.push({curr->left, curr_id*2+1});
                    if(curr->right) q.push({curr->right, curr_id*2+2});
            }
            ans= max(ans,l-f+1);
            
        }
        return ans;
    }

    int main() 
{
 struct node*root= new node(1);
 root->left= new node(2);
 root->right=new node(7);
 root->left->left=new node(3);
 root->left->right= new node(4);
 root->left->right->left= new node(5);
 root->left->right->right= new node(6);
 root->right->right=new node(12);
 int ans=widthOfBinaryTree(root);
 cout<<ans<<" ";

return 0;
}

