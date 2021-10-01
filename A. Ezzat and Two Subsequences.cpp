#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int sum = 0;
		for(int i=0;i<n;i++) {
			cin>>arr[i];
			sum += arr[i];
		}

		sort(arr , arr+n);
		int a = arr[n-1];
		sum -= a;
		sum /= n-1;
		cout<<sum+a<<endl;
	}

	return 0;
}