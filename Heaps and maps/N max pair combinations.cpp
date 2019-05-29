vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    
    vector<int> v;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int len = A.size();
    
    priority_queue <pair<int, pair<int,int>>> q;
    set <pair <int,int>> s;
    
    int first = A[len-1] + B[len-1];
    q.push({first,{len-1,len-1}});
    
    s.insert({len-1,len-1});
    
    for(int it=0;it<len;it++){
        pair<int,pair<int,int>> temp = q.top();
        q.pop();
        v.push_back(temp.first);
        
        int i = temp.second.first;
        int j = temp.second.second;
        
        int sum = A[i-1] + B[j];
        
        if(s.find({i-1,j}) == s.end()){
            q.push({sum,{i-1,j}});
            s.insert({i-1,j});
        }
        
        sum = A[i] + B[j-1];
        
        if(s.find({i,j-1}) == s.end()){
            q.push({sum,{i,j-1}});
            s.insert({i,j-1});
        }
    }
    
    return v;
    
}
