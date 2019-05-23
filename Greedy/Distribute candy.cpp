int Solution::candy(vector<int> &A) {
    
    int len = A.size();
    vector<int>lefttoright(len,1);
    vector<int>righttoleft(len,1);
    
    for(int i=1;i<len;i++){
        if(A[i]>A[i-1])
            lefttoright[i] = lefttoright[i-1] + 1;
    }
    
    for(int i=len-2;i>=0;i--){
        if(A[i]>A[i+1])
            righttoleft[i] = righttoleft[i+1] + 1;
    }
    
    int sum=0;
    for(int i=0;i<len;i++){
        sum += max(lefttoright[i],righttoleft[i]);
    }
    
    return sum;
}
