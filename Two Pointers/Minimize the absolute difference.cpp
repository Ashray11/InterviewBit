int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

    int i = A.size()-1;
    int j = B.size()-1;
    int k = C.size()-1;
    int minm = min(C[k],min(A[i],B[j]));
    int maxm = max(C[k],max(A[i],B[j]));
    int min_diff = abs(maxm - minm);
    int curr_diff; 
    while(i!=-1 && j!=-1 && k!=-1){
        minm = min(C[k],min(A[i],B[j]));
        maxm = max(C[k],max(A[i],B[j]));
        
        curr_diff = abs(maxm - minm);
        
        if(curr_diff<=min_diff){
            min_diff = curr_diff;
        }
        if(maxm == A[i]){
            i--;
        }
        else if(maxm == B[j]){
            j--;
        }
        else{
            k--;
        }
    }
    
    return min_diff;
}
