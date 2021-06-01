/*
author : Instinct 
*/
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

class stack1{
private:
    vector<int> v;
public:
    void push(int data){
        v.push_back(data);
    }

    bool ty() {
        return (v.size()==0);
    }
    void pop(){
        if(!ty())
            v.pop_back();
    }

    int top(){
        return v[v.size()-1];
    }

};

  
void solve()
{
    stack1 s;
    for(int i =0 ; i<5 ; i++){
        s.push(i*i);
    } 
    while( ty() ){
        cout<<s.top()<<" ";
        s.pop();
    }
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