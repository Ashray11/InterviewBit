vector<int> Solution::sieve(int A) {
    bool prime[A+1];
    memset(prime,true,sizeof(prime));
    
    for(int p=2;p*p<=A;p++){
        if(prime[p]==true){
            for(int i=p*2;i<=A;i+=p){
                prime[i]=false;
            }
        }
    }
    
    
    vector <int> ans;
    for(int i=2;i<=A;i++){
        if(prime[i]==true){
            ans.push_back(i);
        }
    }
    
    return ans;
}
