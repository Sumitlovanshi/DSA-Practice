/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
// #define for(i,n) for (i = 0; i < n; i++) 
// #define for(i,a,n) for (i = a; i <= n; i++)
// #define for(i,n,a) for (i = n; i >= a; i--) 
  
int countDigit(long long n) {
  return floor(log10(n) + 1);
}

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    int n = countDigit(a);
    // ll p = pow(10,n);
    ll p = 10;
    a = a*p;
    for(int i=0;i<=9;i++){
        if(((a+i)%b)==0){
            a = a+i;
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<a;
        for(int i=0;i<c-1;i++){
            cout<<0;
        }
        cout<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

    
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}



// void solve()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     bool flag = false;
//     int n = countDigit(a);
//     // ll p = pow(10,n);
//     ll p = 10;
//     a = a*p;
//     for(int i=0;i<=9;i++){
//         if(((a+i)%b)==0){
//             a = a+i;
//             flag = true;
//             break;
//         }
//     }
