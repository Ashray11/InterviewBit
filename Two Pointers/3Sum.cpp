int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int closest = A[0]+A[1]+A[2];
    for(int i=0;i<A.size()-2;i++){
        int start = i+1;
        int end = A.size()-1;
        while(start<end){
            int x = A[i]+A[start]+A[end];
            if(x==B)
                return x;
            if(abs(B-x) < abs(B-closest)){
                closest = x;
            }
            if(x < B){
                start++;
            }
            else{
                end--;
            }
        }
    }
    
    return closest;
}
