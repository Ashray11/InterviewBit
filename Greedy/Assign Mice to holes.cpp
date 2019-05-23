int Solution::mice(vector<int> &A, vector<int> &B) {

    if(A.size()==0 || B.size()==0)
        return 0;
    
    int res = 0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    for(int i=0;i<A.size();i++){
        res = max(res,abs(A[i]-B[i]));
    }
    
    return res;
    
}
