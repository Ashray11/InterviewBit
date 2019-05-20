
int Solution::longestSubsequenceLength(const vector<int> &A) {
    
    if(A.size()==0)
        return 0;
    
    int len = A.size();
    
    vector<int> inc(len,1);
    vector<int> dec(len,1);
    
    for(int i=1;i<len;i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i])
                inc[i] = max(inc[i],inc[j]+1);
        }
    }
    
    for(int i=len-2;i>=0;i--){
        for(int j=len-1;j>i;j--){
            if(A[j]<A[i])
                dec[i] = max(dec[i],dec[j]+1);
        }
    }
    
    int max = 0; 
    
    for(int i=0;i<len;i++){
        if(inc[i]+dec[i]-1 > max){
            max = inc[i]+dec[i]-1;
        }
    }
    
    return max; 
}
