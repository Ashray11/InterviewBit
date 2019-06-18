int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

    int i=0,j=0,k=0;
    int res = INT_MAX;
    
    
    while(i<A.size() && j<B.size() && k<C.size()){
        int temp1 = A[i] - B[j];
        int temp2 = B[j] - C[k];
        int temp3 = C[k] - A[i];
        res = min(res,max(abs(temp1),max(abs(temp2),abs(temp3))));
        
        if(abs(temp1) >= abs(temp2) && abs(temp1) >= abs(temp3)){
            if(temp1>0){
                j++;
            }
            else{
                i++;
            }
        }
        else if(abs(temp2) >= abs(temp1) && abs(temp2) >= abs(temp3)){
            if(temp2>0){
                k++;
            }
            else{
                j++;
            }
        }
        else if(abs(temp3) >= abs(temp1) && abs(temp3) >= abs(temp2)){
            if(temp3>0){
                i++;
            }
            else{
                k++;
            }
        }
    }
    
    return res;
}
