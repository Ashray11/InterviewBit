int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int minm = INT_MAX;
    int x;
    for(int i=0;i<A.size()-1;i++){
        x = A[i]^A[i+1];
        if(x < minm){
            minm = x;
        }
    }
    
    return minm;
}
