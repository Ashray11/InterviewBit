// This solution uses DP.

int Solution::uniquePaths(int A, int B) {
    
    //2D table for storing results of subproblem 
    int count[A][B];
    
    //Count of paths to reach any cell in 1st column is 1
    for(int i=0;i<A;i++){
        count[i][0]= 1;
    }
    
    for(int j=0;j<B;j++){
        count[0][j]=1;
    }
    
    for(int i=1;i<A;i++){
        for(int j=1;j<B;j++){
            count[i][j] = count[i-1][j] + count[i][j-1];
        }
    }
    
    return count[A-1][B-1];
}
