vector <int> strstrUtil(string B){
    vector <int> lps(B.length());
    int index = 0;
    
    for(int i=1;i<B.size();i++){
        if(B[i] == B[index]){
            lps[i] = index+1;
            index++;
            i++;
        }
        else{
            if(index!=0){
                index = lps[index-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
    
    return lps;
}

int Solution::strStr(const string A, const string B) {
    if(A.size() == 0 || B.size()==0){
        return -1;
    }
    
    vector <int> lps = strstrUtil(B);
    int i=0;
    int j=0;
    while(i<A.size() && j<B.size()){
        if(A[i] == B[j]){
            i++;
            j++;
        }
        
        else{
            if(j!=0){
                j = lps[j-1];
            }
            else{
                i++;
            }
        }
        if(j==B.size())
            return i-j;
    }
    
    return -1;
}
