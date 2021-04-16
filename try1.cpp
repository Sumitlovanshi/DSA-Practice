/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
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
  
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,a,n) for (i = a; i <= n; ++i)
#define REPR(i,n,a) for (i = n; i >= a; --i) 
  
  
void solve()
{
	string s = "heTllohoMwareTyou";
	string s1 = "helo";
	string s2 = "";
	int a=0;
	for(int i=0;i<s.length();i++){
			if (s[i] == 'T' && a == 0)
            {
                s2.append(s[i])];
                a++;
            }
            else if (s[i] == 'M' && a == 1)
            {
                s2 + s[i];
                a = 21;
            }
            else if (s[i] == 'T' && a == 21)
            {
                s2 + s[i];
                a = -1;
                break;
            }
		}
		cout<<s2<<endl;
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