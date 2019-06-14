int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count=0;
    int x;
    unsigned int B = 1;
    for(int i=0;i<32;i++){
        x = A%10;
        if(x&B){
            count++;
        }
        A = A>>1;
    }
    
    return count;
}
