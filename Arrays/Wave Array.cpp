vector<int> Solution::wave(vector<int> &A) {
    int n = A.size();
    sort(A.begin(),A.end());
    
    for(int i=0;i<n;i=i+2){
        if(i>0 && A[i]<A[i-1])
            swap(A[i],A[i-1]);
            
        if(i<n-1 && A[i]<A[i+1])
            swap(A[i],A[i+1]);
    }
    
    return A;
}
