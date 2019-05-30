int Solution::maxSubArray(const vector<int> &A) {
    
    int sum = 0, maxm = INT_MIN;
    for(int i=0;i<A.size();i++){
        sum += A[i];
        sum = max(sum,A[i]);
        maxm = max(maxm,sum);
    }
    
    return maxm;
}
