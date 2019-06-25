string Solution::simplifyPath(string A) {

    stack <string> s;
    int i=0;
    while(i<A.length()){
        if(isalpha(A[i])){
            string ans;
            while(isalpha(A[i])){
                ans.push_back(A[i]);
                i++;
            }
            s.push(ans);
        }
        else if(A[i]=='.' && A[i-1] == '.'){
            if(!s.empty())
                s.pop();
            i++;
        }
        else{
            i++;
        }
    }

    string res="";
    
    if(s.empty()){
        res = "/";
    }

    while(!s.empty()){
        string x = s.top();
        res = "/" + x + res;
        s.pop();
    }
    
    return res;
}
