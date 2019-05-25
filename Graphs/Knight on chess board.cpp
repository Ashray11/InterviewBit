int X[] = {-2,-1,1,2,2,1,-1,-2};
int Y[] = {1,2,2,1,-1,-2,-2,-1};

int Solution::knight(int A, int B, int C, int D, int E, int F) {
    
    int sx = C-1;
    int sy = D-1;
    int dx = E-1;
    int dy = F-1;
    
    vector<vector<int>> visited(A, vector<int> (B,0));
    
    queue <pair<int,pair<int,int>>> q;
    q.push({0,{sx,sy}});
    
    visited[sx][sy] = 1;
    
    while(!q.empty()){
        
        int level = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;
        
        if(x == dx && y == dy){
            return level;
        }
        
        q.pop();
        
        for(int i=0;i<8;i++){
            int newx = x + X[i];
            int newy = y + Y[i];
            if(newx>=0 && newx<A && newy>=0 && newy<B && visited[newx][newy]==0){
                q.push({level+1,{newx,newy}});
                visited[newx][newy] = 1;
            }
        }
        
    }
    
    return -1;
}
