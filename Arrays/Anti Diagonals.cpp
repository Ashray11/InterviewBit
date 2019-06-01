vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int len = A.size();
    int n = 2*len -1;
    
    vector<vector<int>> v(n);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            v[i+j].push_back(A[i][j]);
        }
    }
    
    return v;
}
