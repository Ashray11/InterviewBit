int minLength (vector <string> &s){
    
    int n = s.size();
    int min = s[0].size();
    
    for(int i=1;i<n;i++){
        if(s[i].size()<min){
            min = s[i].size();
        }
    }
    
    return min;
}

string Solution::longestCommonPrefix(vector<string> &A) {
    //We will compare the strings character by character
    int minLen = minLength(A);
    int n = A.size();
    string ans;
    
    for(int i=0;i<minLen;i++){
        char current = A[0][i];
        for(int j=1;j<n;j++){
            if(current!=A[j][i]){
                return ans;
            }
        }
        
        ans.push_back(current);
    }
    
    return ans;
}
