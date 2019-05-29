vector<int> Solution::dNums(vector<int> &A, int B) {
    
    int start = 0;
    int end = B-1;
    unordered_map <int,int> m;
    vector <int> v;
    
    if(B>A.size())
        return v;
    
    for(int i=start;i<=end;i++){
        m[A[i]]++;
    }
    
    while(1){
        v.push_back(m.size());
        int rem = A[start];
        end++;
        
        if(end == A.size())
            break;
        m[A[end]]++;
        m[A[start]]--;
        
        if(m[A[start]] == 0)
            m.erase(A[start]);
        start++;
    }
    
    return v;
}

