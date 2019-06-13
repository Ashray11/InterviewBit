int Solution::romanToInt(string A) {
    map <char,int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int sum=0;
    int ans = m[A[A.length()-1]];
    for(int i=A.length()-2;i>=0;i--){
        if(m[A[i]] < m[A[i+1]]){
            sum = sum - m[A[i]];
        }
        else{
            sum = sum + m[A[i]];
        }
    }
    
    return ans;
}
