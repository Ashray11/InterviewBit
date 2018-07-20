//This solution doesn't work for larger inputs.
int fact(int n){
    if(n<=1){
        return 1;
    }
    else
        return (n*(fact(n-1));
}

int findSmallerInRight(string str, int low, int high){
    int countRight = 0, i;
    
    for(i=low+1;i<=high;i++){
        if(str[i]<str[low])
            countRight++;
    }
    
    return countRight;
}

int Solution::findRank(string A) {
    int n = A.size();
    int mul = fact(n);
    int rank = 1;
    int countRight;
    
    int i;
    for(i=0;i<n;i++){
        mul /= n-i;
        
        countRight = findSmallerInRight(A,i,n-1);
        rank += (countRight*mul);
    }
    
    return rank;
}
