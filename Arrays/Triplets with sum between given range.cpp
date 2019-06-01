int Solution::solve(vector<string> &A) {
    
    vector<double> v;
    int len = A.size();
    for(int i=0;i<len;i++){
        v.push_back(stof(A[i]));
    }
    
    double a = v[0], b = v[1], c = v[2];
    
    
    for(int i=3;i<len;i++){
        
        if(a+b+c > 1 && a+b+c <2){
            return 1;
        }
        else if(a+b+c >=2){
            if(max(a,max(b,c)) == a)
                a = v[i];
            else if(max(a,max(b,c)) == b)
                b = v[i];
            else if(max(a,max(b,c)) == c)
                c = v[i];
        }
        else if(a+b+c <=1){
            if(min(a,min(b,c)) == a)
                a = v[i];
            else if(min(a,min(b,c)) == b)
                b = v[i];
            else if(min(a,min(b,c)) == c)
                c = v[i];
        }
    }
    
    if(a+b+c >1 && a+b+c <2)
        return 1;
    
    return 0;
}
