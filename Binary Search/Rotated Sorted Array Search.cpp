int binarySearch(const vector<int> &A, int B, int low, int high){
    while(low<=high){
        int mid = low + (high-low)/2;
        if(A[mid] == B){
            return mid;
        }
        else if(A[mid] < B){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int rotatedArr(const vector<int> &A){
    int low = 0;
    int high = A.size()-1;
    while(low<=high){
        if(A[low] <= A[high]){
            return low;
        }
        int mid = low + (high-low)/2;
        int n = A.size();
        int next = (mid+1)%n;
        int prev = (mid + n -1)%n;
        if(A[mid] <= A[prev] && A[mid] <= A[next]){
            return mid;
        }
        else if(A[mid] <= A[high]){
            high = mid -1;
        }
        else if(A[mid] >= A[low]){
            low = mid+1;
        }
    }
}

int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int pivot = rotatedArr(A);
    int res;
    if(A[A.size()-1] < B){
        res = binarySearch(A,B,0,pivot-1);
    }
    else
        res = binarySearch(A,B,pivot,A.size()-1);
    return res;
}
