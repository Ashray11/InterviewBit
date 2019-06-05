long fact(int n){
    if(n==0)
        return 1;
    
    return (n*fact(n-1)%1000003)%1000003;
}

int Solution::findRank(string A) {
    long res = 0;
    while(A.size()>1){
        char c = A[0];
        int count = 0;
        for(int i=1;i<A.length();i++){
            if(A[i]<c){
                count++;
            }
        }
        if(count!=0)
            res += (count*fact(A.length()-1))%1000003;
        A.erase(A.begin());
    }
    
    return (res+1)%1000003;
}

