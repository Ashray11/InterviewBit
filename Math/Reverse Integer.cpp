int Solution::reverse(int A) {
    
    // bool negative = false;
    // if(A<0){
    //     negative = true;
    //     A = -A;
    // }
    // cout<<sizeof(long int)<<'\n';
    // cout<<INT_MAX<<'\n';
    long int res = 0;
    // int prev_num = 0;
    while(A!=0){
        int curr_num = A%10;
        res = (res*10) + curr_num;
        // if((res-curr_num)/10 != prev_num){
        //     return 0;
        // }
        
        // prev_num = res;
        A = A/10; 
        if(res>INT_MAX || res<INT_MIN)
            return 0;
    }
    
    // if(negative == true) 
    //     return -res;
    // else 
        return (int)res;
}
