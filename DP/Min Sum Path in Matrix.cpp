int Solution::minPathSum(vector<vector<int> > &A) {
    
    if(A.size()==0)
        return 0;
    
    
    /*
    int sum = A[0][0];
    int i=0,j=0;
    int minm = INT_MAX;
    while(i!=A.size()-1 && j!=A[0].size()-1){
        
        if(i==A.size()-1){
            sum += A[i][j];
            j++;
        }
        else if(j==A[0].size()-1){
            sum += A[i][j];
            i++;
        }
        else{
            minm = min(A[i+1][j],A[i][j+1]);
            sum += minm;
        }
    }
    
    return sum;
    
    */
    
    int sum = 0;
    int rows = A.size();
    int cols = A[0].size();
    
    vector<vector<int>>v(rows, vector<int> (cols));
    for(int i=0;i<rows;i++){
        v[i][0] = sum + A[i][0];
        sum = v[i][0];
    }
    
    sum = 0;
    for(int i=0;i<cols;i++){
        v[0][i] = sum + A[0][i];
        sum = v[0][i];
    }
    
    for(int i=1;i<rows;i++){
        for(int j=1;j<cols;j++){
            v[i][j] = A[i][j] + min(v[i-1][j], v[i][j-1]);
        }
    }
    
    return v[rows-1][cols-1];
}
