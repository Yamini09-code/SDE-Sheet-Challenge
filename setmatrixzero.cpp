#include <bits/stdc++.h>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
  // Write your code here
  
  int col = 1;
  //marking
  for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
		  if(matrix[i][j]==0){
			  if(j==0){
				 col =0;
				  matrix[i][0] =0;
			  }
			  else{
				   matrix[i][0] =0;//marking is zero
			  matrix[0][j] =0;

			  }
			 

		  }
	  }
  }

  //flip
  //inner part
  for(int i=n-1;i>0;i--){
	  for(int j=m-1;j>0;j--){
		  if(matrix[i][0]==0 || matrix[0][j]==0){
			  matrix[i][j] =0;
			 
		  }
	  }
  }
  
//upper row
/*
int i =0;
  for(int j =m-1;j>0;j--){
	  if(matrix[i][j] ==0 ||matrix[0][0]==0){
		  matrix[i][j] = 0;
	  }
  }

*/
int i=0;
  if(matrix[0][0] ==0){
	  for(int j=1;j<m;j++){
          matrix[i][j]=0;
	  }
  }

  int j=0;
  if(col ==0){
	  for(int i=0;i<n;i++){
          matrix[i][j]=0;
	  }
  }
//side column
/*int j=0;
  for(int i =0;i<n;i++ ){
	  if(matrix[i][j] ==0|| col ==0){
		  matrix[i][j] =0;
	  }
  }
  */


return matrix;


  //side cloumn

  /*int  row[n] = {0};
  int column[m] = {0};
  for (int i = 0; i <n; i++) {
    for (int j = 0; j <m; j++) {
      if (matrix[i][j] == 0) {
        row[i] = 1;
        column[j] = 1;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (row[i] == 1 || column[j] == 1) {
        matrix[i][j] = 0;
      }
    }
  }
  return matrix;
  */
}