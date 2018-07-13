int Solution::maxSubArray(const vector<int> &A) {
    int max_so_far = A[0];
    int curr_max = A[0];
    
    for(auto i= A.begin()+1; i!=A.end();i++){
        curr_max = max(*i, *i + curr_max);
        max_so_far = max(max_so_far, curr_max);
    }
    
    return max_so_far;
}
