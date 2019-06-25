int Solution::isValid(string A) {
    stack <char> s;
    int i=0;
    while(i<A.length()){
        if(A[i] == '{' || A[i]=='[' || A[i]=='('){
            s.push(A[i]);
        }
        else if(!s.empty() && ((A[i] == '}' && s.top() == '{') || (A[i] == ']' && s.top() == '[') || (A[i] == ')' && s.top() == '('))){
            s.pop();
        }
        else 
            return 0;
            
        i++;
    }
    
    if(!s.empty()){
        return 0;
    }
    
    return 1;
}
