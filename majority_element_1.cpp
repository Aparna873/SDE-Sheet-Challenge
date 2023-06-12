#include <bits/stdc++.h>
//Moore's Voting Algo (Optimal)(>N/2)
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int el;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(cnt==0)
		{
			el=arr[i];
			cnt++;
		}
		else if(el==arr[i])
		{
			cnt++;
		}
		else{
			cnt--;
		}
	}
	int cnt1=0;
	for(int i=0;i<n;i++)
	{
		if(el==arr[i])
		{
			cnt1++;
		}
	}
	if(cnt1>(n/2)) return el;
	else return -1;
}