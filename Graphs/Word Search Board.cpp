int X[] = {0,0,1,-1};
int Y[] = {1,-1,0,0};

bool dfs(int i, int j, vector<string> &A, string B, int ind){
    
    if(ind == B.size()-1)
        return true;
    
    for(int it=0;it<4;it++){
        int newx = i + X[it];
        int newy = j + Y[it];
        if(newx >=0 && newx <A.size() && newy>=0 && newy<A[0].size() && (A[newx][newy] == B[ind+1])){
             if(dfs(newx,newy,A,B,ind+1) == true)
                return true;
        }
    }     
    
    return false;
    
}

int Solution::exist(vector<string> &A, string B) {
    
    int len1 = A.size();
    int len2 = A[0].size();
    
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(A[i][j] == B[0]){
                if(dfs(i,j,A,B,0) == true)
                    return 1;
            }
        }
    }
    
    return 0;
}
