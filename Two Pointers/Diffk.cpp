int Solution::diffPossible(vector<int> &A, int B) {
    
    int left = 0;
    int right = left+1;
    while(right<A.size()){
        
        if(left == right){
            right++;
        }
        if( A[right]- A[left] == B){
            return 1;
        }
        else if(A[right] - A[left] > B){
            left++;
        }
        else{
            right++;
        }
    }
    
    return 0;
}
