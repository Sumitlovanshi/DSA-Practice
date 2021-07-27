#include<bits/stdc++.h>
using namespace std;


// BFS traversal of graph
vector<int> bfs (int n , vector<int> adj[]){
    vector<int> bfs;
    vector<int> vis( n+1 , 0);

    for(int i=1; i<n+1;i++){
        if( !vis[i] ){
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it : adj[node]) {
                    if( ! vis[it] ){
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    return bfs;
}


//graph input 
int main(){
    int n , m;
    cin>>n>>m;

    vector<int> adj[n+1];
    //taking input
    for(int i=0;i<m;i++){
        int u , v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    //calling bfs traversal
    vector<int> v  = bfs( n , adj);
    for(int i = 0 ; i < v.size() ; i++) {
        cout<<v[i]<<endl;
    }

    return 0;
}