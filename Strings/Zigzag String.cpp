string Solution::convert(string A, int B) {
    
    if(B==1){
        return A;
    }
    
    vector<string> v(B);
    int row = 0;
    bool down;
    
    for(int i=0;i<A.length();i++){
        v[row].push_back(A[i]);
        if(row==0){
            down = true;
        }
        else if(row==B-1){
            down = false;
        }
        
        (down) ? row++ : row--;
    }
    
    string res = "";
    for(int i=0;i<B;i++){
        res += v[i];
    }
    
    return res;
}
