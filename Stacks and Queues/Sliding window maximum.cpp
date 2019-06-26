vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {

    int n = A.size();
    
    vector<int> v;
    deque <int> dq;
    int i;
    for(i=0;i<B;i++){
        while(!dq.empty() && A[i] >= A[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    
    while(i<A.size()){
        v.push_back(A[dq.front()]);
        while(!dq.empty() && dq.front() <= i-B){
            dq.pop_front();
        }
        
        while(!dq.empty() && A[i] >= A[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        i++;
    }
    
    v.push_back(A[dq.front()]);
    
    return v;
}
