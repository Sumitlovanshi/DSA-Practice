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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int m=0,b=0;
    for(int i=0;i<3;i++){
        if(s2[i] == '_'){
            b++;
        }
    }
    for(int i=0;i<3;i++){
        if(s2[i] == '_'){
            b++;
        }
    }
    for(int i=0;i<3;i++){
        if(s3[i] == '_'){
            b++;
        }
    }
    if(s1[0]==s2[0] && s2[0]==s3[0]){
        m++;
    }
    if(s1[1]==s2[1] && s2[1]==s3[1]){
        m++;
    }
    if(s1[2]==s2[2] && s2[2]==s3[2]){
        m++;
    }
    if(s1[0]==s1[1] && s1[1]==s1[2]){
        m++;
    }
    if(s2[0]==s2[1] && s2[1]==s2[2]){
        m++;
    }
    if(s3[0]==s3[1] && s3[1]==s3[2]){
        m++;
    }
    if(s1[0]==s2[1] && s2[1]==s3[2]){
        m++;
    }
    if(s1[2]==s2[1] && s2[1]==s3[0]){
        m++;
    }
    if(m == 1){
        cout<<"1"<<endl;
    }
    else if(b==0 && m==0){
        cout<<"1"<<endl;
    }
    else if(m > 1){
        cout<<"3"<<endl;
    }
    else if(b != 0){
        cout<<"2"<<endl;
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