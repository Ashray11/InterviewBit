int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    long int minm = 1, maxm = A;
    long int mid = 0;
    if(A==0)
        return 0;
    else if (A==1)
        return 1;
    else{
        while(minm<=maxm){
            mid = (maxm+minm)/2;
        
            if(mid*mid <= A && (mid+1)*(mid+1)>A)
                return mid;
                
            else if (mid*mid > A)
                maxm  = mid - 1;
            else
                minm = mid + 1;
        }
    }
}
