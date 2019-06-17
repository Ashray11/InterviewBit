int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    //Used to remove rare elements
    // Order of the elements is changed
    /*int i=0;
    int n=A.size()-1;
    while(i<n){
        if(A[i] == B){
            A[i] = A[n];
            n--;
        }
        else{
            i++;
        }
    }
    
    return n+1;
    */
    
    int i=0;
    for(int j=0;j<A.size();j++){
        if(A[j]!=B){
            A[i] = A[j];
            i++;
        }
    }
    
    A.erase(A.begin()+i,A.end());
    return i;
}
