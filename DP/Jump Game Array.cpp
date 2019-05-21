int Solution::canJump(vector<int> &A) {
    
    //Correct solution but TLE
    /*vector <int> v(A.size(),INT_MAX);
    vector <int> result(A.size());
    
    if(A.size()<=1)
        return A.size();
        
    result[0] = -1;
    v[0] = 0;
    for(int i=1;i<v.size();i++){
        for(int j=0;j<i;j++){
            if(i<=j+A[j]){
                v[i] = min(v[i],v[j]+1);
                result[i] = j;
            }
        }
    }
    
    if(v[v.size()-1]==INT_MAX)
        return false;
    
    int i=result.size()-1;
    while(i>=0){
        i = v[i];
    }
    
    if(i!=-1)
        return false;
    
    return true;
    */
    
    if(A.size()<=1)
        return A.size();
    
    vector <int> temp(A.size(),0);
    
    int closest = A.size()-1;
    
    for(int i=A.size()-2;i>=0;i--){
        if(A[i]+i>=closest){
            closest = i;
            temp[i] = 1;
        }
    }
    
    return temp[0];
}
