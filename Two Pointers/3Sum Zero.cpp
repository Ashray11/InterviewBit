vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector <vector<int>> sol;
    vector <int> v;
    if(A.size()<3){
        return sol;
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++){
        if(i>0 && A[i] == A[i-1]){
            continue;
        }
        int start = i+1;
        int end = A.size()-1;
        while(start<end){
            if(A[i] + A[start] + A[end] == 0){
               v.push_back(A[i]);
               v.push_back(A[start]);
               v.push_back(A[end]);
               sol.push_back(v);
               v.clear();
               do{
                   start++;
               }while(start<end && A[start] == A[start-1]);
               
               do{
                   end--;
               }while(start<end && A[end] == A[end+1]);
            }
            else if(A[i] + A[start] + A[end] < 0 ){
                start++;
            }
            else{
                end--;
            }
        }
    }
    
    return sol;
}
