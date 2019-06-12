int Solution::atoi(const string A) {
    string str = A;
    int i=0;
    if(str.length()==0){
        return 0;
    }
            
    while(str[i] == ' '){
        i++;
    }
    
    if(!(isdigit(str[i]) || str[i]=='+' || str[i]=='-')){
        return 0;
    }
    else{
        int num = 0;
        int sign =1;
        if(str[i] == '-'){
            sign = -1;
            i++;
        }
        else if(str[i] == '+'){
            i++;
        }
        while((str[i] - '0' >=0) && (str[i]-'0' <=9) && i<str.length()){
            if(num > INT_MAX/10 || ((num == INT_MAX/10) && ((str[i]-'0') > INT_MAX%10))){
                    return (sign==-1) ? INT_MIN : INT_MAX;
            }
            num = num*10 + (str[i]-'0');
            i++;
        }
        
        if(sign==-1)
           return -1*num;
        
        return num;
    }
        
}
