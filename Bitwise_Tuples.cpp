#include <bits/stdc++.h>

// #define along long int(x) x.begin(),x.end()
using namespace std;

long long int pw( long long int a, long long int b ) {
    static long long int mod = 1000000007;
    if(b==0)return 1;
    if(b==1)return a;
     
    if(b%2==0)
    {
        long long int ans = pw(a,b/2);
        return (ans * ans) % mod;
    }
    else 
    {
        long long int ans = pw(a,(b-1)/2);
        return ((a*ans)%mod*ans)%mod;
    }
}

int main() {
//     fastio
    int t; 
    cin >>t ;
    while(t--){
        long long int a,b,tmp;
        cin>>a>>b;
        tmp = pw(2,a)-1;
        cout<<pw(tmp,b)<< endl;
    }
    return 0;
}
