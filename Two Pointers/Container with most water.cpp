int Solution::maxArea(vector<int> &A) {
    
    if(A.size()<=1){
        return 0;
    }
    int start = 0;
    int end = A.size()-1;
    int maxm = INT_MIN;
    while(start<end){
        int height = min(A[start],A[end]);
        int dist = end-start;
        int cont = height*dist;
        if(cont > maxm){
            maxm = cont;
        }
        if(height == A[start]){
            start++;
        }
        else{
            end--;
        }
    }
    
    return maxm;
}
