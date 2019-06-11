
//DP Solution
string Solution::longestPalindrome(string A) {
    int len = A.length();
    if(len == 0 || len == 1){
        return A;
    }
    
    int start = 0;
    int maxm = 1;
    
    vector <vector<bool>> v(A.length(), vector<bool>(A.length(),false));
    
    for(int j=0;j<len;j++){
        for(int i=j;i>=0;i--){
            if(i==j){
                v[i][j] = true;
                continue;
            }
            else if(A[i] == A[j]){
                if(j-i == 1){
                    v[i][j] = true;
                }
                else{
                    v[i][j] = v[i+1][j-1];
                }
            }
            
            if(v[i][j] && j-i+1 > maxm){
                maxm = j-i+1;
                start = i;
            }
        }
    }
    
    string temp = A.substr(start,maxm);
    return temp;
}
