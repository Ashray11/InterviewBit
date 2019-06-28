string Solution::fractionToDecimal(int A, int B) {
    if(A==0)
        return "0";
    
    string res;
    if(A<0^B<0){
        res += '-';
    }
    
    int64_t x = A;
    int64_t y = B;
    
    x = abs(x);
    y = abs(y);
    
    //int64_t ans = x/y;
    res+= to_string(x/y);
    //cout<<res;
    
    int64_t rem = x%y;
    if(rem==0)
        return res;
        
    res+='.';
    unordered_map<int,int> m;
    
    for(int64_t r = x%y;r;r%=y){
        if(m.count(r)>0){
            res.insert(m[r],1,'(');
            res = res + ')';
            break;
        }
        
        m[r] = res.size();
        
        r*= 10;
        
        res += to_string(r/y);
    }
    
    return res;
}
