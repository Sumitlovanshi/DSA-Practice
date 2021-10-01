#include <bits/stdc++.h>
using namespace std;
  
#define ll long long int
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; i++) 
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 

class node{
    public:
    int data;
    node* left;
    node * right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
}; 

node* buildtree(){
    int d;
    cin>>d;
    
    if(d == -1){
        return NULL;
    }
    node* root = new node(d);
    root = new node(d);
    root->left = buildtree();
    root->right = buildtree();
    
    return root;
}

void print(node* root){
    if(root == NULL) {
        return;
    }
    cout<<root->data<<' ';
    print(root->left);
    print(root->right);
    return; 
}

void bfs(node *root){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* f = q.front();
        cout<<f->data<<' ';
        q.pop();

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
        
    }
    return;
}

int height(node * root){
    if(!root) NULL;

    int ls = height(root->left);
    int rs = height(root->right);
    return max( ls , rs) +1;
}

void solve()
{
    node* root = buildtree();
    print(root);
    cout<<endl;
    bfs(root);
}
  


int main()
{
  
     //fast_io;
  
     ull t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}
