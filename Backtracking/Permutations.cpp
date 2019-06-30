void dfs(vector<int>&A,vector<vector<int>>&v,int pos){
    
    if(pos == A.size()){
        v.push_back(A);
        return;
    }
    else{
        for(int i=pos;i<A.size();i++){
            swap(A[i],A[pos]);
            dfs(A,v,pos+1);
            swap(A[i],A[pos]);
        }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> v;
    dfs(A,v,0);
    return v;
}
