string Solution::addBinary(string A, string B) {
    
    int i = 0;
    int j = 0;
    int c = 0;
    string res;
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    int temp = 0;
    int x = 0;
    while(i<A.length() || j<B.length()){
        if(i<A.length()){
            temp = temp + A[i]-'0';
            i++;
        }
        if(j<B.length()){
            temp = temp + B[j] - '0'; 
            j++;
        }
        
        temp = temp + c;
        x = temp%2;
        c = temp/2;
        string ans = to_string(x);
        res += ans;
    }
    
    if(c==1){
        res += "1";
    }
    
    reverse(res.begin(),res.end());
    return res;
    
}
