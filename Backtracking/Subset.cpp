void subset(vector<int> &A, vector<int> &v, vector<vector<int>> &sol, int index){
    sol.push_back(v);
    
    for(int i=index;i<A.size();i++){
        v.push_back(A[i]);
        subset(A,v,sol,i+1);
        v.pop_back();
    }
    
    return;
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> v;
    vector<vector<int>> sol;
    int index = 0;
    sort(A.begin(),A.end());
    subset(A,v,sol,index);
    sort(sol.begin(),sol.end());
    return sol;
}
