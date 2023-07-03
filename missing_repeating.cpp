#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int r=-1;
	int m=-1;
	int hash[n+1]={0};
	for(int j=0;j<n;j++)
	{
		hash[arr[j]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(hash[i]==2) r=i;
		else if(hash[i]==0) m=i;
	}
	return {m,r};
}