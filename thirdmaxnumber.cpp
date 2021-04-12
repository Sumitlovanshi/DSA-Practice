#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	vector<int>nums;
	
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		nums.push_back(a);
	}
	
	sort(nums.begin(),nums.end());
//	if (nums.size() < 3){
//		cout<<nums[n-1];
////		return 0;
//	}
//	else{
//		cout<<nums[n-3];
//	}

	for(int i=0;i<n;i++){
		cout<<nums[i]<<" ";
	}
	return 0;
	return 0;
	
}
