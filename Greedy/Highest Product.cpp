int Solution::maxp3(vector<int> &A) {
    int pos_result,neg_result;
    
    sort(A.begin(),A.end());
    int len = A.size();
    pos_result = A[len-1]*A[len-2]*A[len-3];
    neg_result = A[0]*A[1]*A[len-1];
    
    return max(pos_result,neg_result);
}
