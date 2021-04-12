#include<iostream>
using namespace std;
#include<bits/stdc++.h>

float round1(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main(){
	int t; cin>>t;
	while(t--)
	{
		float k1,k2,k3,v;
		cin>>k1>>k2>>k3>>v;
		float x = k1*k2*k3*v;
		x = 100/x;
		
		float y = round1(x);
		float z =  9.58;
		
		if( z > y ){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
		
//		int n;
//		cin>>n;
//		int arr[n];
//		for(int i=0;i<n;i++){
//			cin>>arr[i];
//		}
	}
	return 0;
}

