int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int i=0, dist = 0;
    int n = A.size();
    if(n==1)
        return 0;
    
    while(i!= n-1){
        int X = abs(A[i+1] - A[i]);
        int Y = abs(B[i+1] - B[i]);
        dist = dist + max(X,Y);
        i++;
    }
    return dist;
}
