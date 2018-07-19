int Solution::titleToNumber(string A) {
    int n = A.size();
    int result = 0;
    for(int i=0;i<n;i++){
        char s = A[i];
        result *= 26;
        result += s - 'A' +1;
    }
    
    return result;
}
