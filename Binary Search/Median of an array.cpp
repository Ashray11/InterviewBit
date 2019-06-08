double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A.size()>B.size()){
        return findMedianSortedArrays(B,A);
    }
    
    int x = A.size();
    int y = B.size();
    
    int low = 0;
    int high = x;
    while(low<=high){
        int partX = (low+high)/2;
        int partY = (x+y+1)/2 - partX;
        
        int maxLeftX = (partX == 0) ? INT_MIN : A[partX - 1];
        int minRightX = (partX == x) ? INT_MAX : A[partX];
        
        int maxLeftY = (partY == 0) ? INT_MIN : B[partY - 1];
        int minRightY = (partY == y) ? INT_MAX : B[partY];
        
        if(maxLeftX <= minRightY && maxLeftY <= minRightX){
            if((x+y)%2 == 0){
                return (double)(max(maxLeftX,maxLeftY) + min(minRightX,minRightY))/2;
            }
            else{
                return (double)max(maxLeftX,maxLeftY);
            }
        }
        else if(maxLeftX > minRightY){
            high = partX -1;
        }
        else{
            low = partX + 1;
        }
    }
}
