void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n = A.size();
    
    //transpose of matrix 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(A[i][j], A[j][i]);
        }
    }
    
    //reverse columns
    for(int i=0;i<n;i++){
        for(int j=0,k=n-1;j<k;j++,k--){
            swap(A[i][j],A[i][k]);
        }
    }
    
}
