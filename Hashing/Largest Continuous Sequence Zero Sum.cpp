vector<int> Solution::lszero(vector<int> &A) {
    map <int,int> m;
    int start = INT_MAX;
    int end = INT_MAX;
    int sum = 0;
    for(int i=0;i<A.size();i++){
        int temp_start, temp_end;
        sum += A[i];
        if(sum==0){
            temp_start = 0;
            temp_end = i;
            if(temp_end - temp_start >= end-start){
                start = temp_start;
                end = temp_end;
            }
        }
        else if(m.find(sum)==m.end()){
            m[sum] = i;
        }
        else{
            temp_start = m[sum]+1;
            temp_end = i;
            if(temp_end - temp_start > end-start){
                start = temp_start;
                end = temp_end;
            }
            else if(temp_end - temp_start == end-start && temp_start < start){
                start = temp_start;
                end = temp_end;
            }
        }
    }
    vector<int>v;
    if(start == INT_MAX && end == INT_MAX)
        return v;
        
    
    for(int i=start;i<=end;i++){
         v.push_back(A[i]);
    }

    
    return v;
}
