int Solution::colorful(int A) {
    
    map <int,bool> m;
    vector <int> v;
    int x = A;
    while(x!=0){
        v.push_back(x%10);
        x = x/10;
    }
    
    reverse(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        int num = 1;
        for(int j=i;j<v.size();j++){
            num = num*v[j];
            if(m.find(num)!=m.end())
                return 0;
            m[num] = true;
        }
    }
    
    return 1;
}
