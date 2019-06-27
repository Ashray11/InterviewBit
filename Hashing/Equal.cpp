vector<int> Solution::equal(vector<int> &A) {
    unordered_map <int,vector<int>> m;
    for(int i=0;i<A.size()-1;i++){
        for(int j=i+1;j<A.size();j++){
            int sum = A[i] + A[j];
            if(m[sum].size()<4){
                if(m[sum].size()==0 || (i>m[sum][0] && m[sum][1]!=j && m[sum][1]!=i)){
                    m[sum].push_back(i);
                    m[sum].push_back(j);
                }
                
            }
            
        }
    }

    vector<int>v;
    vector <int> sol;
    for(auto it=m.begin();it!=m.end();it++){
        if((it->second).size() == 4){
            v = it->second;
            if(sol.size() == 0){
                sol = v;
            }
            else{
                if(v[0] < sol[0] || (v[0] == sol[0] && v[1]<sol[1]) || (v[0] == sol[0] && v[1] ==sol[1] && v[2] < sol[2]) || (v[0] == sol[0] && v[1]==sol[1] && v[2] == sol[2] && v[3]<sol[3])){
                    sol = v;
                }
            }
        }
    }
    
    return sol;
}
