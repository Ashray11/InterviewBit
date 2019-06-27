vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map <string,vector<int>> m;
    vector<vector<int>> v;
    
    for(int i=0;i<A.size();i++){
        string temp = A[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(i+1);
    }
    
    for(auto it = m.begin();it!=m.end();it++){
        v.push_back(it->second);
    }
    
    return v;
}
