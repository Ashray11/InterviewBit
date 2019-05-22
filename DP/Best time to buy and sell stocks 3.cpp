int Solution::maxProfit(const vector<int> &A) {
    
    /*if(A.size()<=1)
        return 0;
        
    int prev = 0;
    int curr = 1;
    int first = A[prev];
    vector <int> trans;
    
    while(curr<=A.size()){
        
        if(curr==A.size()){
            trans.push_back(A[prev]-first);
        }
        else{
        if(A[curr]>A[prev]){
            curr++;
            prev++;
        }
        else{
            trans.push_back(A[prev]-first);
            prev = curr;
            first = A[prev];
            curr++;
        }
        }
    }
    
    sort(trans.begin(),trans.end());
    
    int n = trans.size();
    return(trans[n-1]+trans[n-2]);
    
    */
    
    
    if(A.size()==0){
        return 0;
    }
    int k = 2;
    int len = A.size();
    vector<vector<int>>v(k+1, vector<int> (len));
    
    for(int i=0;i<v[0].size();i++){
        v[0][i] = 0;
    }
    
    for(int i=0;i<v.size();i++){
        v[i][0] = 0;
    }
    
    //int maxDiff = -A[0];
    
    for(int i=1;i<v.size();i++){
        int maxDiff = -A[0];
        for(int j=1;j<v[0].size();j++){
            v[i][j] = max(v[i][j-1], A[j] + maxDiff);
            maxDiff = max(maxDiff, v[i-1][j] - A[j]);
        }
    }
    
    return v[v.size()-1][v[0].size()-1];
    
    
    
}
