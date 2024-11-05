void rotate(vector<vector<int> >& matrix) {
    //CodeGenius
    int n=matrix.size();
    //step 1 transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    //step2 reverse;
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
