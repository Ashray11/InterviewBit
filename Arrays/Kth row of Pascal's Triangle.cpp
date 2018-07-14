vector<int> Solution::getRow(int n) {
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
}
