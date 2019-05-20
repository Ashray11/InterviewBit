int Solution::isMatch(const string A, const string B) {
    
     vector<vector<bool>> v(A.length()+1, vector<bool> (B.length()+1));
    
    v[0][0]= true;
    for(int i=1;i<v[0].size();i++){
        if(B[i-1] == '*'){
            v[0][i] = v[0][i-2];
        }
    }
    
    //cout<<v.size();
    //cout<<A.length()<<endl;

    for(int i=1;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            if(B[j-1] == '.' || (B[j-1] == A[i-1])){
                //cout<<"ho";
                v[i][j] = v[i-1][j-1];
            }
            else if(B[j-1] == '*'){
                v[i][j] = v[i][j-2];
                //cout<<"hi"<<endl;
                if(B[j-2] == '.' || A[i-1] == B[j-2]){
                    v[i][j] = v[i][j] || v[i-1][j];
                }
            }
            else{
                v[i][j] = false;
            }
        }
    }
    
    //cout<<A.length()<<endl;
    //cout<<v[0][0]<<endl;
    return v[A.length()][B.length()];
}
