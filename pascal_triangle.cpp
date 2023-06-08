//Optimal Solution
#include <bits/stdc++.h>
vector<long long int> nCr(int row)
{
  long long res=1;
  vector<long long int>ansrow;
  ansrow.push_back(1);
  for(int col=1;col<row;col++)
  {
      res=res*(row-col);
      res=res/(col);
      ansrow.push_back(res);
  }
  return ansrow;
}
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  for (int i = 1; i <= n; i++) {
    vector<long long int>temp = nCr(i);
    ans.push_back(temp);
  }
  return ans;
}