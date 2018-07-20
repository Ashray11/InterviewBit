int Solution::trailingZeroes(int A) {
    
    //Trailing 0s in n! = Count of 5s in prime factors of n!
    //                  = floor(n/5) + floor(n/25) + floor(n/125) + ....
    
    int count = 0;
    for(int i = 5; A/i >=1;i*=5){
        count += A/i;
    }
    
    return count;
}
