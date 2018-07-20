//This solution doesn't work for larger values. 

long int fact(int n){
    if(n<=1)
        return 1;
    else
        return n*(fact(n-1));
}

int countSmallerInRight(string s, int low, int high){
    
    int countRight = 0, i;
    for(i=low+1;i<=high;i++){
        if(s[i]<s[low]){
            countRight++;
        }
    }
    
    return countRight;
}
int duplicateFact(string A, int low, int high){
    
    vector<int> duplicates(52,0);
    int n = A.size();
    for(int j=low;j<=high;j++){
        if((A[j] >='A') && A[j] <='Z')
            duplicates[int(A[j]) -'A'] += 1;
        else
            duplicates[int(A[j]) -'a' + 26] += 1;
    }
        
    int dup_fact = 1;
    for(int i=0;i<52;i++){
        dup_fact *= fact(duplicates[i]);
    }
    
    return dup_fact;
}
int Solution::findRank(string A) {
    
    int n = A.size();
    long int rank =1;
    int countRight;
    long int mul = fact(n);
    
    // vector<int> duplicates(52,0);
    
    for(int i=0;i<n;i++){
    
        mul /= (n-i);
        countRight = countSmallerInRight(A,i,n-1);
        int dup_fact = duplicateFact(A,i,n-1);
        rank += (mul*countRight)/dup_fact;
        
        // rank /= dup_fact;
        
    }
    
    
    
    return (int)rank%1000003;
}
