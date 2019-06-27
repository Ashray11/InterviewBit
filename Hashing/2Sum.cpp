vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map <int,int> m;
    vector <int> ans;
    for(int i=0;i<A.size();i++){
        int x = B-A[i];
        if(m.find(x)!=m.end()){
            ans.push_back(m[x]);
            ans.push_back(i+1);
            return ans;
        }
        if(m.find(A[i]) == m.end()){
            m[A[i]] = i+1;
        }
    }

    return ans;
  
}
