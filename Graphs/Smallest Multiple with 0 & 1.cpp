int mod(string &s, int &A){
    
    int num = 0;
    for(int i=0;i<s.length();i++){
        num = num*10 + (s[i] - '0');
    }
    
    num = num % A;
    return num;
}

string Solution::multiple(int A) {
    queue <string> q;
    set <int> s;
    
    string str = "1";
    
    q.push(str);
    
    while(!q.empty()){
        
        str = q.front();
        q.pop();
        
        int rem = mod(str,A);
        
        if(rem==0){
            return str;
        }
        
        else if(s.find(rem)==s.end()){
            s.insert(rem);
            q.push(str + "0");
            q.push(str + "1");
        }
    }
}
