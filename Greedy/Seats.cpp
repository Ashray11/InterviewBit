int Solution::seats(string A) {
    
    /*
    int maxm = INT_MIN;
    int first=-1,last=-1;
    int freq = 0;
    int len = A.length();
    int hops = 0;
    int temp;
    
    for(int i=0;i<len;i++){
        if(A[i]=='x'){
            freq = freq + 1;
            
            if(maxm<=freq){
                maxm = freq;
                if(first==-1){
                    first = i;
                    temp = first;
                    //cout<<i;
                }
                last = i;
            }
        }
        else if(A[i]=='.'){
            first = -1;
            //last = -1;
            freq = 0;
        }
    }
    
    if(maxm==INT_MIN)
        return 0;
    
    //cout<<temp<<last;
    for(int i=0;i<temp;i++){
        if(A[i]=='x'){
            hops += (temp-1) - i;
        }
    }
    
    for(int i=last+1;i<len;i++){
        if(A[i]=='x'){
            hops += i - (last+1);
        }
    }
    
    return hops;
    */
    
    vector <int> pos;
    int hops = 0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]=='x'){
            pos.push_back(i);
        }
    }
    
    int psize = pos.size();
    
    if(psize==0)
        return 0;
    
    int mid = psize/2;
    int median;
    
    if(psize%2!=0){
        median = pos[mid];
    }
    else{
        median = (pos[mid] + pos[mid-1])/2;
    }
    
    int empty;
    if(A[median]=='x'){
        empty = median -1;
    }
    else{
        empty = median;
    }
    
    for(int i=median-1;i>=0;i--){
        if(A[i]=='x'){
            hops += empty - i;
            hops = hops % 10000003;
            empty--;
        }
    }
    
    empty = median +1;
    for(int i=median+1;i<A.size();i++){
        if(A[i]=='x'){
            hops += i - empty;
            hops = hops % 10000003;
            empty++;
        }
    }
    
    return hops%10000003;
    
}
