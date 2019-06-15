int Solution::cntBits(vector<int> &A) {
    
    vector <long> zeroOne(2);
    long mod = 1000000007;
    long ans =0;
    long countZeros;
    while(true){
        countZeros = 0;
        zeroOne[0] = 0;
        zeroOne[1] = 0;
        for(long i=0;i<A.size();i++){
            if(A[i]==0){
                countZeros++;
            }
            zeroOne[A[i]%2]++;
            A[i] = A[i] >> 1;
        }   
        ans += (zeroOne[0]*zeroOne[1])%mod;
        if(countZeros == A.size()){
            return (2*ans)%mod;
        }
    }
    
}
