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
  
#define rep(i,n) for (i = 0; i < n; i++) 
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 
  
  
void solve()
{
    string s = "abef";
    // for(int i=0;i<s.size() ; i++) cout<<s[i]<<' ';
    // cout<<endl;  
    int arr[26];

    for(int i=0;i<s.size() ; i++)   arr[i] = s[i] - 'a';

    int shift[4] = { 3 , 5 , 9 , 11 };
    // for(int i=0;i<s.size() ; i++) cout<<arr[i]++<<' ' ;
    // cout<<endl;
    int sum = 28;
    for(int i=0;i<s.size() ; i++){
        arr[i] += sum;
        sum -= shift[i];
        if(arr[i] > 25){
            arr[i] %= 25;
        }
        // cout<<s[i] << ' ' ;
    }
    for(int i=0;i<s.size() ; i++){
        s[i] = arr[i] + 'a';
        cout<<s[i] << ' ' ;
    }

}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}