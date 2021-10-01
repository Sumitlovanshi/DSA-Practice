#include<bits/stdc++.h>
using namespace std;



void bfs(int n , vector<int> adj[] , vector<int> src){
    vector<int> dis(n , __INT32_MAX__);
    queue<int> q;
    q.push(n);
    dis[n] = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it: adj[node]){
            if(dis[node] +1 < dis[it]){
                dis[it] = dis[node] +1;
                q.push(it);
            }
        }
    }
    for(auto i:dis){
        cout<<i<<endl;
    }
}