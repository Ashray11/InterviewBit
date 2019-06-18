int Solution::nTriang(vector<int> &A) {
    
    if(A.size()<3){
        return 0;
    }

    long mod = 1000000007;
    sort(A.begin(),A.end());
    long count = 0;
    for(long i=A.size()-1;i>=2;i--){
        long start = 0;
        long end = i-1;
        while(start<end){
            if(A[start]+A[end] > A[i]){
                count += (end-start)%mod;
                end--;
            }
            else{
                start++;
            }
        }
    }
    
    return count%mod;
}
