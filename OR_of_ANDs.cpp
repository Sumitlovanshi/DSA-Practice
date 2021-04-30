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
  
// #define for(i,n) for (i = 0; i < n; i++) 
// #define for(i,a,n) for (i = a; i <= n; i++)
// #define for(i,n,a) for (i = n; i >= a; i--) 

 bool isperfectSquare(ll n){
  if(n==1) return false;
  double temp = pow(n, 0.5);

  return (ceil(temp)==floor(temp));
} 
  
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i] *= arr[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        int x = isperfectSquare(arr[i]);
        if(x==0){
            flag =1;
            break;
        }
    }
    if(flag){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
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