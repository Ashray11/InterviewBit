int Solution::bulbs(vector<int> &A) {
    
    if(A.size()==0){
        return 0;
    }
    
    //if(A.size()==1 && A[0]==1){
    //    return 0;
    //}
    
    int count;
    if(A[0]==1){
        count = 0;
    }
    else{
        count = 1;
    }
    int i=1;
    while(i!=A.size()){
        if(A[i]==1 && A[i-1]!=1){
            count++;
        }
        else if(A[i]==0 && A[i-1]!=0){
            count++;
        }
        i++;
    }
    
    return count;
}
