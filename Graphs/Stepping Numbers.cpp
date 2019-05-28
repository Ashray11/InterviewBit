void bfs(int x, int y, int num, vector<int> &v){
    
    queue <int> q;
    q.push(num);
    
    while(!q.empty()){
        
        int step_num = q.front();
        q.pop();
        
        if(step_num >= x && step_num <= y){
            v.push_back(step_num);
        }
        
        if(step_num == 0 || step_num >y){
            continue;
        }
        
        int last_dig = step_num % 10;
        int stepA = step_num*10 + (last_dig -1);
        int stepB = step_num*10 + (last_dig +1);
        
        if(last_dig == 0){
            q.push(stepB);
        }
        else if(last_dig == 9){
            q.push(stepA);
        }
        else{
            q.push(stepA);
            q.push(stepB);
        }
    }
}

vector<int> Solution::stepnum(int A, int B) {
    
    vector<int> v;
    for(int i=0;i<=9;i++){
        bfs(A,B,i,v);
    }
    
    sort(v.begin(),v.end());
    return v;
}
