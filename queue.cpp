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
  
template<typename T>
class Que{

    T *arr;
    int ms , cs , f , r;

public:
    //Constructor
    Que(int ds = 4){
    f = 0 ;
    ms = ds ;
    r = ms -1 ;
    arr = new T[ms];
    cs = 0;
    }
    bool isfull(){
        return (ms == cs);
    }
    bool isempty(){
        return cs==0;
    }

    void push(int  data){
        if(!isfull()){
            r = (r+1)%ms;
            arr[r] = data;
            cs++;
        }
    }

    void pop(){
        if(!isempty()){
            f = (f+1)%ms;
            cs--;
        }
    }

    T getf(){
        return arr[f];
    }
};
  
void solve()
{
    

}
  
int main()
{
  
     //fast_io;
  
    Que<int> q;
    for(int i=0;i<7;i++){
        q.push(i);
    }
    q.pop();
    q.push(8);

    while(!q.isempty()){
        cout<<q.getf()<<' ';
        q.pop();
    }

    return 0;
     ull t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}