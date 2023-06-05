#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   
      int n =arr.size();
vector <vector <int>> ans;
//sort(arr.begin(), arr.end());
map <int,int> mpp;
for(int i=0;i<n;i++){
   int num = arr[i];
   int more = s - num;
    
   if(mpp.find(more)!=mpp.end()){
      int count = mpp[more];
      while(count>0){
ans.push_back({min(more, arr[i]), max(more, arr[i])});
count --;
      }
      
    

   }
  mpp[num]++;
}
sort(ans.begin(),ans.end());

return ans;

}