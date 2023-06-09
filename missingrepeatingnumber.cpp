vector<int> findMissingRepeatingNumbers(vector<int> a) {
  // Write your code here

  long long n = a.size();
  long long sumnum = (n * (n + 1)) / 2;
  long long sumarr = 0;
  long long squarenum = (n * (n + 1)*(2 * n + 1)) / 6;
  long long squarearr = 0;
  for (int i = 0; i < n; i++) {
    sumarr += a[i];
    squarearr += (long long)a[i] * (long long)a[i]; // to avoid overflow
  }

  long long val1 = sumarr - sumnum;       // x-y   / repe - missing
  long long val2 = squarearr - squarenum; // x2-y2  repeating^2 - missing^2
  val2 = val2 / val1;
  long long x = (val1 + val2) / 2;
  long long y = val2 - x;
  return {(int)x, (int)y};

  /*int missingnumber = -1;
int repeatingnumber =-1;
vector <int> ans;
  int n = a.size();
  int hash[n+1]={0};
  for(int i=0;i<n;i++){
      hash[a[i]]++;
  }
  for(int i=1;i<=n;i++){
      if(hash[i] ==2)
      {
        repeatingnumber = i;

      }
      else if(hash[i]==0){
          missingnumber = i;

      }
      if(missingnumber!=-1 && repeatingnumber!=-1){
          break;
      }
  }
  ans.push_back(repeatingnumber);
  ans.push_back(missingnumber);
  return ans;

*/
}