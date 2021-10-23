#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

#define ll long long 
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vl vector<ll>
#define pi pair<ll,ll>
#define vp vector<pi>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rall(x) x.rbegin(), x.rend()
#define watch(x) cout << (#x) << ' is ' << (x) << endl
#define f(i,x,z) for(ll i=x;i<z;i++)
#define deb(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define clr(x) memset(x, 0, sizeof(x)) 
#define mll map<ll,ll>
#define mod 1000000007
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* CreateNode(int data)
{
    Node* n= new Node();
    if(!n){
        cout<<"Memory Error\n";
    }
    n->data=data;
    n->left=n->right=NULL;
    return n;

}
Node* InsertNode(Node* root , int data){
    if(root==NULL){
        root =CreateNode(data);
        return root;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        else
        {
            temp->left = CreateNode(data);
            return root;
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right = CreateNode(data);
            return root;
        }
    }
    return 0;
}
void inorder(Node* temp){
    if(temp==NULL)
    {
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
void preorder(Node* temp){
    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    
    preorder(temp->right);
}
void postorder(Node* temp){
    if(temp==NULL)
    {
        return;
    }
    
    postorder(temp->left);
    
    postorder(temp->right);
    cout<<temp->data<<" ";
}
int main()
{
//   freopen('input.txt', 'r', stdin);
//   freopen('output.txt', 'w', stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    Node* root = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);
 
    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;
 
    int key = 12;
    root = InsertNode(root, key);
 
    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
    cout << "Preorder traversal after insertion: ";
    preorder(root);
    cout << endl;
    cout << "Postorder traversal after insertion: ";
    postorder(root);
    cout << endl;
   return 0;
}