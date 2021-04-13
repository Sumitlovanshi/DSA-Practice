#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector <int> v;
        //pushed the elements after k
        for(int i=k+1;i<=n;i++){
            v.push_back(i);
        }
        
        std::vector<int>::iterator it;
        
        for(int i=k-1;i>0;i--){
            it = std::find (v.begin(), v.end(), k-i);
            
            if(it == v.end()){
                v.push_back(i);
            }
        }
        
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}