int Solution::gcd(int A, int B) {
    // if(A==0){
    //     return B;
    // }
    
    // if(B==0){
    //     return A;
    // }
    
    // if(A>B){
    //     swap(A,B);
    // }
    int temp;
    while(A!=0){
        temp = B;
        B = A;
        A = temp % A;
    }
    
    return B;
}
