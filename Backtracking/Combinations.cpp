void backtrack(int a,int b, vector<int> &v, vector<vector<int>> &sol, int index){
    if(v.size()==b){
        sol.push_back(v);
        return;
    }
    
    for(int i=index;i<=a;i++){
        v.push_back(i);
        backtrack(a,b,v,sol,i+1);
        v.pop_back();
    }
    return;
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> v;
    vector<vector<int>> sol;
    backtrack(A,B,v,sol,1);
    sort(sol.begin(),sol.end());
    return sol;
}
