int Solution::reverse(int A) {
    
    int reverse = 0;
    //int num = A;
    while(A!=0){
        int rem = A%10;
        if( (reverse > INT_MAX/10) || (reverse == INT_MAX/10 && rem>INT_MAX%10) || (reverse < INT_MIN/10) || (reverse == INT_MIN/10 && rem<INT_MIN%10) )
            return 0;
        reverse = reverse*10 + rem;
        A = A/10;
    }
    
    return reverse;

}

