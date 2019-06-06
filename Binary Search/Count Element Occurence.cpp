int binarySearch(const vector<int> &A,int B, bool search){
    int start = 0;
    int end = A.size()-1;
    
    int result = -1;
    while(start<=end){
        int mid = start + (end-start)/2;    
        if(A[mid] == B){
            result = mid;
            if(search){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        else if(A[mid] < B){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    
    return result;
    
}

int Solution::findCount(const vector<int> &A, int B) {
    
    int first = binarySearch(A,B,true);
    if(first == -1){
        return 0;
    }
    int last = binarySearch(A,B,false);
    
    return last-first+1;
}
