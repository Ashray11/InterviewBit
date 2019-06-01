vector<vector<int> > Solution::solve(int A) {

    vector<vector<int>> v(A);
    for(int i=0;i<A;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                v[i].push_back(1);
            }
            else{
                int x = v[i-1][j] + v[i-1][j-1];
                v[i].push_back(x);
            }
        }
    }
    
    return v;
}
