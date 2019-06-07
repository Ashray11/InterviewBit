int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int row = A.size();
    int col = A[0].size();
    int i = -1;
    for(i=0;i<row;i++){
        if(A[i][col-1] >= B){
            break;
        }
    }
    if(i == row){
        return 0;
    }
    
    int first = 0;
    int last = col-1;
    
    while(first<=last){
        int mid = first + (last-first)/2;
        if(A[i][mid] == B){
            return 1;
        }
        else if(A[i][mid] < B){
            first = mid +1;
        }
        else if(A[i][mid] > B){
            last = mid -1;
        }
    }
    return 0;
}
