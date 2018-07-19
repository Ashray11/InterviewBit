vector<int> Solution::primesum(int A) {

    // set <int> s;
    // bool prime[A+1];
    vector <bool> prime(A+1);
    // memset(prime,true,sizeof(prime));
    fill(prime.begin(),prime.end(),true);
    
    for(int p=2;p*p<=A;p++){
        if(prime[p]==true){
            for(int i = p*2;i<=A;i+=p){
                prime[i] = false;    
            }
        }
    }
    
    // for(int i=2;i<=A;i++){
    //     if(prime[i]==true){
    //         s.insert(i);
    //     }
    // }
    
    vector <int> ans;
    // for(auto it = s.begin(); it!=s.end(); it++){
    //     int x = *it;
    //     if(s.find(A-x)!=s.end()){
    //         auto i = s.find(A-x);
    //         int y = *i;
    //         ans.push_back(x);
    //         ans.push_back(y);
    //         break;
    //     }
    // }
    
    for(int i=2;i<=A;i++){
        if(prime[i]==true){
            if(prime[A-i]==true){
                ans.push_back(i);
                ans.push_back(A-i);
                break;
            }
        }
    }
    
    return ans;
}
