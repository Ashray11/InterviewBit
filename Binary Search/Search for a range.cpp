int binarySearch(const vector <int> &A, int B, bool val){
    
    int left = 0;
    int right = A.size()-1;
    int res = -1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(A[mid] == B){
            res = mid;
            if(val == true){
                right = mid -1;
            }      
            else{
                left = mid+1;
            }
        }
        else if(A[mid] < B){
            left = mid +1;
        }
        else{
            right = mid-1;
        }
    }
    
    return res;
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int first = binarySearch(A,B,true);
    int last = binarySearch(A,B,false);
    vector <int> v;
    v.push_back(first);
    v.push_back(last);
    return v;
}
