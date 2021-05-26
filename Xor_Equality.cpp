#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int sol(){
    long long int n=2;
    cin>>n;
    long long int m = 1000000007 , a= n-1;
    long long int x = 1 , y=2 ;
    y = y % m;
    if (y == 0) return 0;
    while (a > 0){
        if(a&1)
            x = (x*y)%m;
        a >>= 1;
        y = (y*y)%m;
    }
    cout<<x<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}


