
//Max Rectangular Area in a Histogram
int histogram(vector<int> v){
    
    stack <int> s;
    int i = 0;
    int len = v.size();
    int area;
    int max_area = 0;    
    
    while(i<len){
        
        if(s.empty() || v[i]>=v[s.top()]){
            s.push(i);
            i++;
        }
        else{
            int t = s.top();
            s.pop();
            if(s.empty()){
                area = v[t]*i;
            }
            else{
                area = v[t]*(i-s.top()-1);
            }
            
            if(max_area<area)
                max_area = area;
        }
    }
    
    while(!s.empty()){
        int t = s.top();
        s.pop();
        if(s.empty()){
            area = v[t]*i;
        }
        else{
            area = v[t]*(i-s.top()-1);
        }
        
        if(max_area<area)
            max_area = area;
    }
    
    return max_area;
}

int Solution::maximalRectangle(vector<vector<int> > &A) {
    
    vector<int> v(A[0]);
    int result = histogram(v);
    int area;
    int max_area = result;
    
    for(int i=1;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]==0){
                v[j] = 0;
            }
            else{
                v[j] += A[i][j];
            }
        }
        
        area = histogram(v);
        if(area>max_area)
            max_area = area;
    }
    
    return max_area;

}
