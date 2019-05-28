bool dfs(int u, map<int,vector<int>> m, vector<int> &color){
    color[u] = 1;
    
    if(m[u].size()!=0){
        //cout<<m[u].size();
    for(auto it = m[u].begin();it!=m[u].end();it++){
        //cout<<*it;
        if(color[*it] == 1)
            return true;
            
        if(color[*it] == 0 && dfs(*it,m,color))
            return true;
    }
    }
    
    color[u] = 2;
    return false;
}

int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    
    vector<int> color(A,0);
    
    map<int,vector<int>> m;
    for(int i=0;i<C.size();i++){
        m[C[i]-1].push_back(B[i]-1);
    }
   
    /*
    for(auto it = m.begin();it!=m.end();it++){
        cout<<(it->first);
        int x = it->first;
        for(auto i = m[x].begin();i!=m[x].end();i++){
            cout<<*i;
        }
    }
    */
    
    for(auto it = m.begin();it!=m.end();it++){
        //cout<<it->first;
        if(color[it->first] == 0 && dfs(it->first,m,color)){
            return 0;
        }
    }
    
    return 1;
}
