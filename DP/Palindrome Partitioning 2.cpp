int isPalindrome(string A, int l, int r){
    
    while(l<=r){
        if(A[l] != A[r]){
            return 0;
        }
        l++;
        r--;
    }
    
    return 1;
}

int Solution::minCut(string A) {
    
    int len = A.size();
    vector <vector <int>> v(len, vector <int> (len));
    
    for(int i=0;i<len;i++){
        v[i][i] = 0;
    }
    
    int l,i,j;
    for(l=2;l<=len;l++){
        for(i = 0;i<len-l+1;i++){
            j = i+l-1;
            
            if(isPalindrome(A,i,j))
                v[i][j] = 0;
            else{
                v[i][j] = INT_MAX;
                for(int k =i;k<j;k++){
                    v[i][j] = min(v[i][j], v[i][k] + v[k+1][j] + 1);
                }
            }
        }
    }
    
    return v[0][v.size()-1];
}
