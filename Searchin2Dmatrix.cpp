bool searchMatrix(vector<vector<int>>& mat, int target) {
        if(!mat.size()) return false;//matrix empty return false
        int n = mat.size();
        int m = mat[0].size();

        //imaginary indexing to matrix for binary search
        int low = 0;
        int high = (n*m)-1;

       while(low<=high){
           int mid = (low+high)/2;
           //corresponding i,j indexes in matrix to get value
           //mid -> i, j ->value
           if(mat[mid/m][mid%m] == target){
              return true;
           }
           else if(mat[mid/m][mid%m]<target){
               low = mid+1;
           }
           else{
               high = mid -1;
           }
       }

       return false;

}













