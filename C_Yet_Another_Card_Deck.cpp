#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int n,q;
    cin>>n>>q;
    int arr[n];\
    deque<int> dq;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        dq.push_back(a);
    }
    while(q--){
        // dq<int> :: iterator it;
        int w;
        cin>>w;
        // std::deque<int> it = find(dq.begin(),dq.end(),w);
        deque<int>::iterator it = find(dq.begin(), dq.end(), w);
        if(it != dq.end()){
            cout<<*it<<endl;

        }


    }
    return 0;
}