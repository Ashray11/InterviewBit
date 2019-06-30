void paren(vector<string>&v, string &curr,int open, int close, int max){
    
    if(curr.length()==2*max){
        v.push_back(curr);
        return;
    }
    
    if(open<max){
        curr += "(";
        paren(v,curr,open+1,close,max);
        curr.pop_back();
    }
    
    if(close<open){
        curr += ")";
        paren(v,curr,open,close+1,max);
        curr.pop_back();
    }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> sol;
    string curr = "";
    paren(sol,curr,0,0,A);
    return sol;
}
