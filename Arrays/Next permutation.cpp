void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    //Find the number whose next number is greater than itself
    int n = A.size();
    int i = n-2;
    while(i>=0 && A[i+1]<=A[i]){
        i--;
    }
    
    //If found, find the next smallest number on its right.
    if(i>=0){
    int j=n-1;
    while(j>i && A[j]<=A[i]){
        j--;
    }
    //Swap those 2 numbers
    swap(A[i],A[j]);
    }
    
    //Rearrange the right part of the number such that they are in ascending order.
    //But since we find that the numbers to the right will already be in decreasing order.
    //We just need to reverse the order. 
    for(int k = i+1, x= n-1;k<x;k++,x--){
        swap(A[k],A[x]);
    }
}
