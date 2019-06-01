vector<int> Solution::maxset(vector<int> &A) {
    
    long long sum = 0;
    int start = -1;
    int len = 0;
    long long max_sum = INT_MIN;
    int max_len = INT_MIN;
    int min_start = INT_MAX;
    for(int i=0;i<A.size();i++){
        if(A[i]>=0){
            sum = sum + (long long)A[i];
            if(start == -1){
                start = i;
            }
            len++;
            
        }
        if(sum>max_sum){
            max_sum = sum;
            max_len = len;
            min_start = start;
        }
        else if(sum==max_sum && len>max_len){
            max_len = len;
            min_start = start;
        }
        if(A[i]<0){
            sum = 0;
            start = -1;
            len = 0;
        } 
    }
    
    vector<int> v;
    if(sum == 0 ){
        //v.push_back(0);
        return v;
    }
    for(int i=min_start;i<min_start+max_len;i++){
        v.push_back(A[i]);
    }
    
    return v;
}

