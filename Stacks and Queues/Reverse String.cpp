string Solution::reverseString(string A) {
    stack <char> s;
    int i=0;
    while(i<A.length()){
        s.push(A[i]);
        i++;
    }
    
    string ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    
    return ans;
}
