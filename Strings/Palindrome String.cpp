int Solution::isPalindrome(string A) {
    int n = A.size();
    int i=0;
    int j= n-1;
    while(i<j){
        char x = A[i];
        char y = A[j];
        if(!( ((int)x >=65 && (int)x <=90 ) || ( (int)x >=97  && (int)x <=122 ) || isdigit(x) )){
            i++;
            continue;
        }
        if(!( ((int)y >=65 && (int)y <=90 ) || ( (int)y >=97  && (int)y <=122 ) || isdigit(y) )){
            j--;
            continue;
        }
        
        x = tolower(x);
        y = tolower(y);
        if(x!=y){
            return 0;
        }
        i++;
        j--;
    }
    
    return 1;
}
