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
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    string a = "";
    while(n--){
        string s;
        cin>>s;
        // a = ""
        int f=0,p=0;
        for(int i=0;i<m;i++){
            if(s[i] == 'F'){
                f++;
            }
            else if(s[i] == 'P'){
                p++;
            }
        }
        
        if( f >= x || (f == (x-1) && p >= y )){
            a = a + "1";
        }
        else{
            a = a + "0";
        }
    }
    cout<<a<<endl;
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