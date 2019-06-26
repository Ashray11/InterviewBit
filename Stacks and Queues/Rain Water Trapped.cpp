int Solution::trap(const vector<int> &A) {
    int i = 0;
    stack <int> s;
    int ans = 0;
    while(i<A.size()){
        while(!s.empty() && A[s.top()] < A[i]){
            int ind = s.top();
            s.pop();
            if(!s.empty()){
                int height = min(A[i],A[s.top()]) - A[ind];
                int dist = i - s.top() - 1;
                ans += dist*height;
            }
            else{
                break;
            }
        }
        s.push(i);
        i++;
    }
    
    return ans;
}
