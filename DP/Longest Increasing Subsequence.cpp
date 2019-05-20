int Solution::lis(const vector<int> &A) {
    
    if(A.size()==1)
        return 1;
    
    int len = A.size();
    vector <int> v(len,1); 
    int maxm = 0;
    
    for(int i=1;i<A.size();i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i]){
                v[i] = max(v[i], v[j]+1);
            }
            if(v[i]>maxm){
                maxm = v[i];
            }
        }
    }
    
    return maxm;
    
    
}
