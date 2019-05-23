int Solution::majorityElement(const vector<int> &A) {
    
    map<int,int> m;
    int n = A.size();
    int lim = floor(n/2);
    
    for(int i=0;i<n;i++){
        m[A[i]]++;
    }
    
    for(auto it= m.begin();it!=m.end();it++){
        if(it->second>lim){
            return it->first;
        }
    }
    
    //Another method: Moore's Voting Algorithm
}
