int Solution::maxProduct(const vector<int> &A) {
    
    int res = A[0];
    int imax = A[0];
    int imin = A[0];
    
    for(int i=1;i<A.size();i++){
        
        if(A[i]<0){
            swap(imax,imin);
        }
        
        imin = min(A[i],A[i]*imin);
        imax = max(A[i],A[i]*imax);
        
        if(res<imax){
            res = imax;
        }
    }
    
    return res;
    
}
