/*int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    vector<int> lmin (n);
    vector<int> rmax (n);
    
    lmin[0] = A[0];
    for(int i=1;i<n;i++){
        lmin[i] = min(lmin[i-1],A[i]);
    }
    
    rmax[n-1] = A[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i] = max(rmax[i+1],A[i]);
    }
    
    int i=0,j=0,maxDiff = 0;
    while(i<n && j<n){
        if(lmin[i]<=rmax[j]){
            maxDiff = max(maxDiff,j-i);
            j++;
        }   
        else{
            i++;
        }
    }
    
    return maxDiff;
}*/

int Solution::maximumGap(const vector<int> &A) {
    int res = 0;
    vector <pair<int,int>> v;
    for(int i=0;i<A.size();i++){
        v.push_back({A[i],i});
    }
    
    sort(v.begin(),v.end());
    
    int ind = v[v.size()-1].second;
    for(int i=v.size()-2;i>=0;i--){
        res = max(res,ind - v[i].second);
        ind = max(ind,v[i].second);
    }
    
    return res; 
}

