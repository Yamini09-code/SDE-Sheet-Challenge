#include <bits/stdc++.h>

vector <long long int> generateRow(int row){
    vector< long long int > ls;
    long long int  ans = 1;
    ls.push_back(ans);
  int i = row;
    for (int j = 1; j < i; j++) {

      ans = ans*(i-j);
      ans = ans/j;
      ls.push_back(ans);
    }
    return ls;
}
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
   vector<vector<long long int>> res;
  for (int i = 1; i <= n; i++) {//row
    
    res.push_back( generateRow(i));
  }
  return res;
}
