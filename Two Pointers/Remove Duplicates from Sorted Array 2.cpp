int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A.size()<3){
        return A.size();
    }
    
    int i=2,j=2;
    while(j<A.size()){
        if(A[j]>A[i-2]){
            A[i++] = A[j++];
        }
        else{
            j++;
        }
    }
    
    return i;
}
