#include<bits/stdc++.h>
using namespace std;
int main(){
	int h , w , n;
	cin>>h>>w>>n;
	int arr[h+1][w+1];
	for(int i= 0;i<=h;i++){
		for(int j=0;j<=w;j++){
			arr[i][j] = 0;
		}
//		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		int a , b;
		cin>>a>>b;
		arr[a][b] = i;
	}
//	for(int i=0;i<n;i)
	// for(int i = 0 ;i<)
	for(int i= 0;i<=h;i++){
		for(int j=0;j<=w;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
