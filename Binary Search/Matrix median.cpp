int Solution::findMedian(vector<vector<int> > &A) {
    int maxm = INT_MIN, minm = INT_MAX;
    int r = A.size();
    int c = A[0].size();
    for(int i=0;i<r;i++){
        minm = min(A[i][0], minm);
        maxm = max(A[i][c-1], maxm);
    }
    
    int req = (r*c+1)/2;
    while(minm<maxm){
        int mid = minm + (maxm-minm)/2;
        int place = 0;
        for(int i=0;i<r;i++){
            place += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
        }  
            if(place<req){
                minm = mid+ 1;
            }
            else
                maxm  = mid;
    
    }
    
    return minm;
    
}
