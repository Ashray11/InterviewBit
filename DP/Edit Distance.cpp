int Solution::minDistance(string A, string B) {
    
    
    int len1 = A.length() + 1;
    int len2 = B.length() + 1;
    
    vector <vector <int>> v(len2,vector<int> (len1));
    
    for(int i=0;i<len2;i++){
        v[i][0] = i;
    }
    
    for(int i=0;i<len1;i++){
        v[0][i] = i;
    }
    
    
    for(int i=1;i<len2;i++){
        for(int j=1;j<len1;j++){
            if(B[i-1]==A[j-1])
                v[i][j] = v[i-1][j-1];
            else{
                v[i][j] = min(v[i-1][j],min(v[i][j-1],v[i-1][j-1])) + 1;
            }
        }
    }
    
    return v[len2-1][len1-1];
}
