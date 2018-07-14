int Solution::solve(vector<int> &A) {
    int n = A.size();
    int flag=-1;
    sort(A.begin(),A.end());
    // for(int i=0;i<n;i++){
    //     if(A[i]<0){
    //         A[i] = -A[i];
    //     }
    // }
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1])
            continue;
        if(A[i] == n-i-1){
            flag = 1;
            break;
        }
    }
    
    if(flag==1)
        return 1;
    else
        return -1;
}
