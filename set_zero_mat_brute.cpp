//Brute Force Approache
#include <bits/stdc++.h>
void markrow(vector<vector<int>>&matrix,int i,int m)
{
	for(int j=0;j<m;j++)
	{
		if(matrix[i][j]!=0)
		{
			matrix[i][j]=-1;
		}
	}
}
void markcol(vector<vector<int>>&matrix,int j,int n)
{
	for(int i=0;i<n;i++)
	{
		if(matrix[i][j]!=0)
		{
			matrix[i][j]=-1;
		}
	}
}
void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				markrow(matrix,i,m);
				markcol(matrix,j,n);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==-1)
			{
				matrix[i][j]=0;
			}
		}
	}
}