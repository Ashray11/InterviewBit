typedef long long ll;
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector <int> ans;
    ll n = A.size();
    ll sum = 0;
    ll sumsq = 0;
    for(ll i=0;i<n;i++){
        sum+=(ll)A[i];
        sumsq+=((ll)A[i]*(ll)A[i]);
    }
    
    ll diff = (n*(n+1)/2) - sum;
    ll diff2 = ((n*(n+1)*(2*n+1))/6) - sumsq;
    ll sumab = diff2/diff;
    ll repeated = (sumab - diff)/2;
    ll missing = (sumab + diff)/2;
    
    ans.push_back(repeated);
    ans.push_back(missing);
    
    return ans;
}
