int Solution::jump(vector<int> &A) {
    if(A.size()<=1)
        return 0;
    
    if(A[0]==0)
        return -1;
        
    int ladder = A[0];
    int stairs = A[0];
    int jump = 1;
    for(int i=1;i<A.size();i++){
        if(i == A.size()-1)
            return jump;
        
        if(i + A[i] > ladder)
            ladder = i + A[i];
        stairs--;
        if(stairs==0){
            jump++;
            if(i>=ladder)
               return -1;
            stairs = ladder - i;
        }
    }
    
    //return -1;
}
