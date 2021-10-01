#include<bits/stdc++.h>
using namespace std;
//review site
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a=0;
        for(int i=0;i<n;i++){
            if(arr[i] == 1){
                a++;
            }
            if(arr[i]==3){
                a++;
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}
