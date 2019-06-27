int Solution::diffPossible(const vector<int> &A, int B) {
    if(A.size()<=1){
        return 0;
    }
    map <int,bool> m;
    for(int i=0;i<A.size();i++){
        if(m.find(A[i]-B) != m.end() || m.find(A[i]+B)!=m.end()){
            return 1;
        }
        m[A[i]] = true;
    }
    
    return 0;
}
