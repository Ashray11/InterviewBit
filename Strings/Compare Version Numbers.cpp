int Solution::compareVersion(string A, string B) {
    
    int i=0, j=0;
    
    while(i<A.length() || j<B.length()){
        double num1 = 0;
        double num2 = 0;
        while(A[i]!='.' && i<A.length()){
            num1 = (num1*10) + (A[i] - '0');
            i++;
        }
        
        while(B[j]!='.' && j<B.length()){
            num2 = (num2*10) + (B[j] - '0');
            j++;
        }
        
        if(num1>num2){
            return 1;
        }
        else if(num1<num2){
            return -1;
        }
        i++;
        j++;
    }
    
    return 0;
}
