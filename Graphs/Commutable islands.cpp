int id[1000005];
int Rank[1000005];

bool comp(const vector<int>&a,const vector<int>&b){
    return a[2]<b[2];
}


//find-set
int root(int x){
    while(id[x]!=x){
        x = id[x];
        id[x] = id[id[x]];
        //x = id[x];
    }    
    
    return x;
}

//union
void unionSet(int x, int y){
    int p = root(x);
    int q = root(y);
    
    if(Rank[p] > Rank[q]){
        id[q] = p;
        Rank[p] += Rank[q];
    }
    else{
        id[p] = q;
        Rank[q] += Rank[p];
    }
    //id[p] = id[q];
}

int Solution::solve(int A, vector<vector<int> > &B) {
    
    sort(B.begin(),B.end(),comp);
    //vector<int> id(A+1);
    //id(A+1);
    
    //for(int i=0;i<B.size();i++){
    //    cout<<B[i][2];
    //}
    
    //make-set
    for(int i=0;i<A;i++){
        id[i] = i;
        Rank[i] = 1;
    }
    
    int minCost = 0;
    int cost;
    int x,y;
    
    for(int i=0;i<B.size();i++){
        
        x = B[i][0]-1;
        y = B[i][1]-1;
        cost = B[i][2];
        
        if(root(x)!=root(y)){
            minCost += cost;
            unionSet(x,y);
        }
    }
    
    return minCost;
}
