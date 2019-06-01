int Solution::solve(vector<int> &A) {
    int n = A.size();
    int flag=-1;
    sort(A.begin(),A.end());
    
    int i=0;
    while(i<n){
        while( i+1<n && A[i]==A[i+1])
            i++;
        if(A[i] == n-i-1){
            flag = 1;
            break;
        }
        i++;
    }
    
    if(flag==1)
        return 1;
    else
        return -1;
}
