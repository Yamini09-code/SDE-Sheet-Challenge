#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	//transpose 
	//reverse 
	int n = mat.size();
	int m = mat[0].size();

	for(int i=0;i<n-1;i++){
		for(int j =i+1;j<m;j++){
			swap(mat[i][j], mat[j][i]);
		}

	}
for(int i=0;i<n;i++){
	for(int j =0;j<m/2;j++){
		swap(mat[i][j], mat[i][n-1-j]);
	}

}
}