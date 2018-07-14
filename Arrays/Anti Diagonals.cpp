vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    int row = 2*n -1;
    int j,k;
    
    vector < vector <int>> temp (row);
    for(int i=0;i<row;i++){
        
        for(j=0,k=i; j<=row && k>=0; j++,k--){
            if(k>=0 && j<n && k<n){
                temp[i].push_back(A[j][k]);        
            }
        }
    }
    
    return temp;
}
