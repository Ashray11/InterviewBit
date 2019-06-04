int Solution::isPalindrome(int A) {
    
    if(A<0){
        return 0;
    }
    int reverse = 0;
    int num = A;
    while(A!=0){
        int rem = A%10;
        reverse = reverse*10 + rem;
        A = A/10;
    }
    
    if(reverse == num){
        return 1;
    }
    return 0;
}
