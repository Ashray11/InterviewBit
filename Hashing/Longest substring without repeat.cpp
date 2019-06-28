int Solution::lengthOfLongestSubstring(string A) {
    set<char> s;
    int maxm = INT_MIN;
    int i=0,j=0;
    while(i<=j && j<A.length()){
        char c = A[j];
        if(s.find(c)==s.end()){
            s.insert(c);
            maxm = max(maxm,j-i+1);
            j++;
        }
        else{
            s.erase(A[i]);
            i++;
        }
    }
    
    return maxm;
}
