int Solution::isPalindrome(int A) {
    
    if(A<0){
        return false;
    }
    
    
    int divisor = 1;
    while(A/divisor>=10){
        divisor*=10;
    }
    
    while(A!=0){
        int leading = A/divisor;
        int trailing = A%10;
        
        if(leading!=trailing){
            return false;
        }
        
        A = (A%divisor)/10;
        divisor = divisor/100;
    }
    
    return true;
}
