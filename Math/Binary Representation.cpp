string Solution::findDigitsInBinary(int A) {
    
    string ans;
    
    if(A==0){
        return "0";
    }
    // string ans;
    while(A>0){
        int x = A%2;
        ans.push_back((char)('0' + x));
        A = A/2;
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}
