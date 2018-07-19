int Solution::hammingDistance(const vector<int> &A) {
    
    int n = A.size();
    int sum =0;
    for(int i= 0;i<32;i++){
        
        int count =0;
        for(int j=0;j<n;j++){
            if( (A[j] & 1<<i) )
                count++;
        }
        
        sum += (count*(n - count)*2); 
    }
    
    return (int)(sum%1000000007);
}
