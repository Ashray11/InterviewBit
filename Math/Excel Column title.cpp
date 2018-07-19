string Solution::convertToTitle(int A) {
    string s;
    // int i=0;
    while(A>0){
        int rem = A%26;
        
        if(rem==0){
            s.push_back('Z');
            A = (A/26) -1;
        }
        else{
            s.push_back(rem -1 + 'A');
            A = A/26;
        }
    }
    
    reverse(s.begin(),s.end());
    // s[i]='\n';
    return s;
}
