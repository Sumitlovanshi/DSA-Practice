#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=arr[0],b=arr[1];
        if(a==b){
            for(int i=0;i<n;i++){
                if(arr[i] != a){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else{
            for(int i=2;i<n;i++){
                if(arr[i] != a){
                    cout<<"1"<<endl;
                    break;
                }
                else{
                    cout<<"2"<<endl;
                    break;
                }
            }
        }
    }
}


















//// 11 13 11 11 
// 1 4 4 4 4 4
