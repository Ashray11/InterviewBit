/*bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    
    int arr = 0;
    int dep = 0;
    int n = arrive.size();
    
    while(arr<n){
        K--;
        arr++;
        if(K==0){
            if(arrive[arr]>=depart[dep]){
                K++;
                dep++;
            }
        }
        
        if(K<0)
            return false;
    }
    
    return true;
    
}*/

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    
    //vector <int> res(arrive);
    vector <pair<int,int>> res;
    for(int i=0;i<arrive.size();i++){
        res.push_back({arrive[i],1});
        res.push_back({depart[i],0});
    }

    sort(res.begin(),res.end());
    int count = 0;
    for(int i=0;i<res.size();i++){
        if(res[i].second == 1){
            count++;
            if(count > K){
                return false;
            }
        }
        else if(res[i].second == 0){
            count--;
        }
    }
    
    return true;
}

