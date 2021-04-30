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
    int n, m, x, y, a, b;
    cin >> n >> m >> x >> y >> a >> b;
    int t_thief = n - x + m - y;
    int t_police = max(n - a, m - b);
    if(t_police < t_thief)
        cout <<"NO\n";
    else
        cout << "YES\n";

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