int binToGray(int x){
    return x^(x>>1);
}

vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int>sol;
    int maxm = pow(2,A);
    for( int i=0;i<maxm;i++){
        int x = binToGray(i);
        sol.push_back(x);
    }
    
    return sol;
}
