vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    int i=0,j=0;
    vector <int> v;
    while(i<=A.size()-1 && j<=B.size()-1){
        if(A[i] == B[j]){
            v.push_back(A[i]);
            if(i<A.size())
                i++;
            if(j<B.size())
                j++;
        }
        else if(A[i] < B[j] && i<A.size()){
            i++;
        }
        else if(A[i] > B[j] && j<B.size()){oo
            j++;
        }
    }
    
    return v;
}
