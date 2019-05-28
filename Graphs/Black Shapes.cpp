//vector<vector<int>> vis;
int X[] = {0,0,1,-1};
int Y[] = {1,-1,0,0};

void dfs(int i, int j, vector<string> &A, vector<vector<int>> &vis){
    int len1 = A.size();
    int len2 = A[0].size();
    
    vis[i][j] = 1;
    
    for(int it=0;it<4;it++){
        int x = i + X[it];
        int y = j + Y[it];
        
        if((x>=0) && (x<len1) && (y>=0) && (y<len2) && (A[x][y] == 'X') && (vis[x][y] == 0)){
            dfs(x,y,A,vis);
        }
    }
}

int Solution::black(vector<string> &A) {
 
  int size = A.size();
  int size2 = A[0].size();
  vector<vector<int>> vis(size, vector<int> (size2,0));
  int com = 0;
  //cout<<vis.size()<<vis[0].size();
  
  for(int i=0;i<size;i++){
    for(int j=0;j<size2;j++){
        if(A[i][j] == 'X' && vis[i][j] == 0){
            dfs(i,j,A,vis);
            com++;
        }
    }
  }
  
  return com;
}
