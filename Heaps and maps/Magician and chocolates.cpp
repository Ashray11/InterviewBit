#define mod 1000000007

int Solution::nchoc(int A, vector<int> &B) {
    
    long sum = 0;
    int len = B.size();
    priority_queue <long> q;
    for(int i=0;i<B.size();i++){
        q.push(B[i]);
    }
    
    for(int i=0;i<A;i++){
        
        long temp = q.top();
        //temp = temp % mod;
        q.pop();
        sum = (sum + (temp % mod))% mod;
        //temp = floor(temp/2);
        q.push(floor(temp/2));
    }
    
    return sum;
}
