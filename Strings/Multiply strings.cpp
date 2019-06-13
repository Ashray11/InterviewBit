string Solution::multiply(string A, string B) {
    
    if(A=="0" || B=="0"){
        return "0";
    }
    int alen = A.length();
    int blen = B.length();
    vector <int> v(alen + blen,0);
    for(int i=alen-1;i>=0;i--){
        for(int j=blen-1;j>=0;j--){
            v[i+j+1] += (A[i] - '0')*(B[j] - '0');
        }
    }
    
    for(int i=alen+blen-1;i>=0;i--){
        if(v[i] >9){
            v[i-1] += v[i]/10;
            v[i] = v[i]%10;
        }
    }
    
    string ans;
    int k=0;
    while(v[k]==0){
        k++;
    }
    for(int i=k;i<v.size();i++){
        ans.push_back(v[i] + '0');
    }
    
    return ans;
}

