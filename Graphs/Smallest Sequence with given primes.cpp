vector<int> Solution::solve(int A, int B, int C, int D) {
    set <int> s;
    int count=0;
    s.insert(A);
    s.insert(B);
    s.insert(C);
    vector <int> ans;
    
    while(count!=D){
            
        auto i = s.begin();
        ans.push_back(*i);
        
        s.insert((*i)*A);
        s.insert((*i)*B);
        s.insert((*i)*C);
        
        s.erase(i);
        count++;
    }
    
    return ans;
}
