/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
    
void solve()
{
    int am,bm,cm,tm,a,b,c;
    cin>>am>>bm>>cm>>tm>>a>>b>>c;
    if(am <= a && bm <= b && cm<= c ){
        if(a+b+c >= tm){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    else{
        cout<<"no"<<endl;
    }
}
  
int main()
{
  
     //fast_io;
  
     int t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}