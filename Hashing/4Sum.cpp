vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<int>v;
    vector<vector<int>>sol;
    for(int i=0;i<A.size()-3;i++){
        if(i!=0 && A[i] == A[i-1])
            continue;
        for(int j=i+1;j<A.size()-2;j++){
            if(j-1>i && A[j] == A[j-1])
                continue;
            int start = j+1;
            int end = A.size()-1;
            while(start<end){
                int x = A[i]+A[j]+A[start]+A[end];
                if(x == B){
                    v.push_back(A[i]);
                    v.push_back(A[j]);
                    v.push_back(A[start]);
                    v.push_back(A[end]);
                    sol.push_back(v);
                    v.clear();
                    do{
                        start++;
                    }while(A[start] == A[start-1] && start<end);
                    do{
                        end--;
                    }while(A[end] == A[end+1] && start<end);
                }
                else if(x>B){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
    }
    
    return sol;
}
