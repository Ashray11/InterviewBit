int Solution::maxProfit(const vector<int> &A) {
    
    if(A.size()==0)
        return 0;
        
    int sol = 0;
    int min = A[0];
    
    for(int i=1;i<A.size();i++){
        if(A[i]<min){
            min = A[i];
        }
        
        sol = max(sol,A[i]-min);
    }
    
    return sol;
}
