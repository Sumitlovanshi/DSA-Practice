#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll D,d,P,Q;
        cin>>D>>d>>P>>Q;
        ll res=P*D;
        ll rd = D-d ; 
        ll m = rd/d;
        ll sum = (m*(m+1)) / 2;
        
        res += (sum*d*Q);
        
        if( rd%d != 0)
        {
            rd=rd-(m*d);
            res=res+rd*(m+1)*Q;
        }
        cout<<res<<"\n";
    }
    return 0;
}