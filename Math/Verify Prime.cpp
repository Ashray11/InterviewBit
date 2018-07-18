int Solution::isPrime(int A) {
    if(A<=1){
        return 0;
    }
    
    if(A<=3){
        return 1;
    }
    
    if(A%2==0 || A%3==0){
        return 0;
    }
    
    for(int i=5;i<=sqrt(A);i+=6){
        if(A%i==0 || A%(i+2)==0){
            return 0;
        }
    }
    
    return 1;
}
