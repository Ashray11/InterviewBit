int Solution::isMatch(const string A, const string B) {
    vector <vector<bool>> v(A.length()+1, vector<bool> (B.length()+1));
    
    //int ind=0;
    //To remove multiple '*'
    //a***b**C = a*b*c
    bool isFirst = true;
    vector <char> pattern;
    
    for(int i=0;i<B.length();i++){
        if(B[i]=='*'){
            if(isFirst==true){
                pattern.push_back(B[i]);
                isFirst = false;
            }
        }
        else{
            pattern.push_back(B[i]);
            isFirst = true;
        }
    }
    
    //DP Algo starts from here
    v[0][0]=true;
    
    if(pattern[0]=='*')
        v[0][1]= true;
        
    for(int i=1;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
         if(pattern[j-1]=='?' || A[i-1]==pattern[j-1])
            v[i][j] = v[i-1][j-1];
         
         else if(pattern[j-1]=='*')
            v[i][j] = v[i-1][j] || v[i][j-1];
        }
    }
    
    return v[A.length()][pattern.size()];
}
