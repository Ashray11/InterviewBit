int Solution::lengthOfLastWord(const string A) {
    if(A.size()==0){
        return 0;
    }
    
    int i=A.length()-1;
    while(A[i] == ' '){
        i--;
    }
    
    int count =0;
    while(A[i]!=' ' && i>=0){
        count++;
        i--;
    }
    
    return count;
}
