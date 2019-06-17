void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int low = 0, mid = 0, high = A.size()-1;
    while(mid<=high){
        if(A[mid] == 0){
            swap(A[mid],A[low]);
            low++;
            mid++;
        }
        else if(A[mid]==2){
            swap(A[mid],A[high]);
            high--;
        }
        else{
            mid++;
        }
    }
    
    //Can also count the number of 0s,1s,2s
    //And then place them from the starting of the array.
}
