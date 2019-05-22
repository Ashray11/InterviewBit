int Solution::maxProfit(const vector<int> &A) {
    
    if(A.size()==0)
        return 0; 
        
    int sol = 0;
    
    for(int i=1;i<A.size();i++){
        if(A[i]- A[i-1] > 0){
            sol += A[i] - A[i-1];
        }
    }
    
    return sol;
}
