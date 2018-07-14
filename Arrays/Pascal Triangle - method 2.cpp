vector<vector<int> > Solution::generate(int n) {
    int row = n;
    if(row == 0)
        return vector <vector <int>> ();
    vector <vector <int>> tri(row);
    
    for(int line =0; line<row; line++){
        tri[line] = vector <int> (line+1);
        
        for(int i=0;i<=line;i++){
            if(i==line || i==0){
                tri[line][i] = 1;
            }
            else{
                tri[line][i]= tri[line-1][i-1] + tri[line-1][i];
            }
        }
    }
    return tri;
}
