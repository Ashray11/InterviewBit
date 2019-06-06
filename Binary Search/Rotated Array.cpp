int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low = 0;
    int high = A.size()-1;
    
    while(low<=high){
        if(A[low] <= A[high]){
            return A[low];
        }
        int n = A.size();
        int mid = low + (high-low)/2;
        int prev = (mid-1+n)%n, next = (mid+1)%n;
        if(A[mid] <= A[prev] && A[mid] <= A[next]){
            return A[mid];
        }
        else if(A[mid] <= A[high]){
            high = mid -1;
        }
        else if(A[mid] >= A[low]){
            low = mid +1;
        }
    }
    
    return -1;
    
}
