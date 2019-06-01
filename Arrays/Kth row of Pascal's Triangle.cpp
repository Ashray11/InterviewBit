
/*vector<int> Solution::getRow(int n) {
    int row = n+1;
    if(row==0)
        return vector <int> ();
    vector <int> tri;
        int C =1;
        for(int i=1;i<=row;i++){
            tri.push_back(C);
            C = C*(row-i)/i;
        }
    return tri;
}*/

vector<int> Solution::getRow(int n) {
    
    int A = n;
    vector<vector<int>> v(A+1);
    for(int i=0;i<A+1;i++){
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
    
    return v[A];

}

