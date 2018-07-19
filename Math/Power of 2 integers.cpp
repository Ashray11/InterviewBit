int Solution::isPower(int A) {
    if(A==1){
        return 1;
    }
    
    for(int i=2;i<=sqrt(A);i++){
        
        unsigned  p = i;
        // p< INT_MAX/i because we want to prevent overflow and 
        //multiplyimg p*i is exceeding the maximum value an int can store
        while(p<=A && p<INT_MAX/i){
            p*=i;
            if(p==A)
                return 1;
        }
    }
    
    return 0;
}
