int Solution::fibsum(int A) {
    
    vector<int> fib;
    int x;
    int count = 0;
    fib.push_back(1);
    fib.push_back(1);
    
    for(int i=2;fib[i-1]<A;i++){
        x = fib[i-1] + fib[i-2];
        fib.push_back(x);
    }
    
    int len = fib.size();
    len--;
    
    while(A>0){
        while(fib[len]>A){
            len--;
        }
        
        A = A - fib[len];
        count++;
    }
    
    return count;
}
