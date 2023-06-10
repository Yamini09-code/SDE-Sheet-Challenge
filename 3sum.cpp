#include <bits/stdc++.h>

vector<vector<int>> triplet(int n, vector<int> &arr) {

  // optimal
  vector<vector<int>> ans;
   sort(arr.begin(), arr.end());
 
 

  for(int i =0;i<n;i++){

      if(i>0&&arr[i]==arr[i-1]) continue;
       int j = i + 1;
  int k = n - 1;
      while(j<k){
         int sum =  arr[i]+arr[j]+ arr[k];
         if(sum <0){
          j++;
         }
         else if(sum>0){
       k--;
         }
         else{
             vector <int> temp = {arr[i],arr[j],arr[k]};
             ans.push_back(temp);
             j++;
             k--;
             while(j<k && arr[j]==arr[j-1]) j++;
             while(j<k &&arr[k]==arr[k-1]) k--;

         }
      }
  }
    
  

  return ans;

  // better
  /*  set <vector<int>> st;

   for(int i=0;i<n;i++){
  map <int,int> mpp;
       for(int j=i+1;j<n;j++){

          int comp = -(arr[i]+arr[j]);
           if(mpp.find(comp)!=mpp.end()){
               int index = mpp[comp];
              vector <int> list = { arr[i], arr[j], arr[index] };
              sort(list.begin(),list.end());
              st.insert(list);

           }
           mpp[arr[j]] = j;

       }
   }
   vector <vector<int> > ans(st.begin(),st.end());
   return ans;
   */

  // brute
  /* set <vector<int>> st;

   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           for(int k=j+1;k<n;k++){
              if( arr[i]+arr[j]+arr[k]==0){
                  vector <int> temp = {arr[i],arr[j],arr[k]};//make a list
                  sort(temp.begin(),temp.end());//sort
                  st.insert(temp);//unique - added to map


              }
           }
       }
   }
   vector<vector<int>> ans(st.begin(),st.end());//array of ans
   return ans;
   */
}