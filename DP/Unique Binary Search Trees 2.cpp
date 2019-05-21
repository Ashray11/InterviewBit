int Solution::numTrees(int A) {
    vector <int> v(A+1);
    v[0] = 1;
    v[1] = 1;
    for(int i=2;i<=A;i++){
        for(int j=0;j<i;j++){
            v[i] += v[j]*v[i-j-1];
        }
    }
    
    return v[A];
}
