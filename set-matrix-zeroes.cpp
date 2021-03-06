//#include<iostream>
//using namespace std;
//#include<bits/stdc++.h>
//int main(){
//	int t; cin>>t;
//	while(t--)
//	{
//		int n,m;
//		cin>>n>>m;
//		int arr[n][m];
//		for(int i=0;i<n;i++){
//			for(int i=0;i<m;i++){
//				cin>>arr[n][m];
//			}
//		}
//		map<int , int > v;
//		for(int i=0;i<n;i++){
//			for(int i=0;i<m;i++){
//				if(arr[n][m]==0){
//					v.insert(make_pair(n,m));
//				}
//			}
//		}
//		int k=v.size();
//		
//		cout<<k;
//	}
//	return 0;
//}
void setZeroes(vector<vector<int>>& matrix)
{
	// Have to check the marks of first row and column before we modify them.
	bool zero_first_row = false;
	bool zero_first_col = false;
	for (int i = 0; i < matrix.size(); i++)
	{
		if (matrix[i][0] == 0)
		{
			zero_first_col = true;
			break;
		}
	}

	for (int j = 0; j < matrix[0].size(); j++)
	{
		if (matrix[0][j] == 0)
		{
			zero_first_row = true;
			break;
		}
	}

	// Scan row and column and set marks
	for (int i = 1; i < matrix.size(); i++)
	{
		for (int j = 1; j < matrix[i].size(); j++)
		{
			if (matrix[i][j] == 0)
			{
				matrix[i][0] = 0;
				matrix[0][j] = 0;
			}
		}

	}

	// Set 0 for rows
	for (int i = 1; i < matrix.size(); i++)
	{
		if (matrix[i][0] == 0)
		{
			for (int j = 1; j < matrix[i].size(); j++)
			{
				matrix[i][j] = 0;
			}
		}
	}

	// Set 0 for columns
	for (int j = 1; j < matrix[0].size(); j++)
	{
		if (matrix[0][j] == 0)
		{
			for (int i = 1; i < matrix.size(); i++)
			{
				matrix[i][j] = 0;
			}
		}
	}

	// Set 0 for first row.
	if (zero_first_row)
	{
		for (int j = 0; j < matrix[0].size(); j++)
		{
			matrix[0][j] = 0;
		}
	}

	// Set 0 for first column
	if (zero_first_col)
	{
		for (int i = 0; i < matrix.size(); i++)
		{
			matrix[i][0] = 0;
		}
	}
}

