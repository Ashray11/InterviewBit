vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    int left = n-1; 
    int right = 0;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            left = i;
            break;
        }
    }
    if(left == n-1){
        vector <int> ans;
        ans.push_back(-1);
        return ans;
    }
    
    for(int j=n-1;j>=0;j--){
        if(A[j]<A[j-1]){
            right = j;
            break;
        }
    }
    
    int min  = *min_element(A.begin()+ left, A.begin()+ right+ 1);
    int max  = *max_element(A.begin()+ left, A.begin()+ right+ 1);
    
    for(int i=0;i<left;i++){
        if(A[i]>min){
            left = i;
            break;
        }
    }
    
    for(int i=n-1;i>=right+1;i--){
        if(A[i]<max){
            right = i;
            break;
        }
    }
    
    vector<int> ans;
    ans.push_back(left);
    ans.push_back(right);
    
    return ans;
}
