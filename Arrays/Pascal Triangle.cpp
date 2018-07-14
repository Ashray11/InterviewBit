vector<vector<int> > Solution::generate(int n) {
    int row = n;
    if(row == 0)
        return vector <vector <int>> ();
    vector <vector <int>> tri(row);
    for(int line =0; line<row; line++){
        tri[line] = vector <int> (line+1);
        int C =1;
        for(int i=0;i<=line;i++){
            tri[line][i] = C;
            C = C * (line - i)/(i+1);
        }
    }
    
    return tri;
}
