//pass vectors,etc by reference
pair<int,int> bfs(queue<pair<int,int>> &q, vector<int> &vis, unordered_map<int,vector<int>> &m){
    
    int maxm  = INT_MIN;
    int farthest = 0;
    
    while(!q.empty()){
        int node = q.front().first;
        int dist = q.front().second;
        q.pop();
        
        if(dist>maxm){
            maxm = dist;
            farthest = node;
        }
        
        vis[node] = 1;
        for(int i=0;i<m[node].size();i++){
            if(vis[m[node][i]] == 0){
                vis[m[node][i]] = 1;
                q.push({m[node][i], dist + 1});
            }
        }
    }
    
    return {farthest,maxm};
}

int Solution::solve(vector<int> &A) {
    
    if(A.size()<=1)
        return 0;
        
    unordered_map<int,vector<int>> m;
    
    
    //Adjacency list
    for(int i=0;i<A.size();i++){
        if(A[i]!=-1){
            m[i].push_back(A[i]);
            m[A[i]].push_back(i);
        }
    }
    
    queue <pair<int,int>> q;
    vector<int> visited(A.size(),0);
    
    //As nodes will be numbered from 0 to N-1
    q.push({0,0});
    
    int farthest = bfs(q,visited,m).first;
    vector<int> vis(A.size(),0);
    
    q.push({farthest,0});
    
    return bfs(q,vis,m).second;
}
