int Solution::singleNumber(const vector<int> &A) {
    
    int result = 0;
    int x, sum;
    for(int i=0;i<32;i++){
        sum = 0;
        x = 1<<i;
        for(int j=0;j<A.size();j++){
            if(A[j]&x){
                sum++;
            }
        }
        
        if(sum%3){
            result = result | x;
        }
    }
    
    return result;
}
