int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {

    int gasSum = 0;
    int costSum = 0;
    int tank = 0;
    int start = 0;
    for(int i=0;i<A.size();i++){
        gasSum += A[i];
        costSum += B[i];
        tank += A[i] - B[i];
        
        if(tank<0){
            start = i+1;
            tank = 0;
        }
    }
    
    if(gasSum<costSum){
        return -1;
    }
    
    return start;
}
