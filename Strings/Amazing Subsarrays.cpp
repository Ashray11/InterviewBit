int Solution::solve(string A) {
    
    if(A == ""){
        return 0;
    }
    int ans = 0;
    int len = A.length();
    for(int i=0;i<len;i++){
        char c = tolower(A[i]);
        if(c == 'a' || c == 'e' || c=='i' || c=='o' || c=='u'){
            ans += (len-i)%10003;
        }
    }
    
    return ans%10003;
}
