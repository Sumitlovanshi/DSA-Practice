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
  
  
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    if(x%y==0){
        cout<<"YES"<<endl;
    }
    else if(((n-1)-x)%y==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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


































// /*
// author : Instinct 
// */
// #include <bits/stdc++.h>
// using namespace std;
  
// #define ll long long int
// #define ull unsigned long long
// #define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
// #define MAX_N 1e5+1
// #define INF 1e9
// #define MOD 1e9+7
// #define LINF 1e18
  
  
  
// void solve()
// {
//     long long int n , x, y;
    
//     cin>>n>>x>>y;
//     n = n+2;
//     // int arrf[n];
//     long long int sum=0 , pos1 = -1 ;
//     while(sum <= n){
//         // arrf[i] = sum;
//         if(sum == x){
//             pos1 = 1;
//             break;
//         }
//         sum = sum + y;
//         // i++;
//     }
//     sum = n-1;
//     // int pos2 = -1 ;
//     // int arrb[n];
//     while(sum >= 0 && pos1 == -1){
//         // arrb[i] = sum;
//         if(sum == x){
//             pos1 = 1;   
//             break;
//         }
//         sum = sum - y;
//         // i++;
//     }
//     if(pos1){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }

// }
  
// int main()
// {
  
//      fast_io;
  
//      ull t;
//      cin>>t;
//      while(t--)
//      {
//          solve();
//      }
//      return 0;
// }