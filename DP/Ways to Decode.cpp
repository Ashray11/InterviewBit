/*int Solution::numDecodings(string A) {
    
    if(A.size()==0){
        return 0;
    }
    else if(A[0]=='0'){
        return 0;
    }
    else if(A.size()==1)
        return 1;
    
    
    vector<int> temp (A.size()+1);
    
    temp[0] = 1;
    temp[1] = 1;
    
    for(int i=2;i<temp.size();i++){
        temp[i] = 0;
        
        if(A[i-1] - '0'>0){
            temp[i] = temp[i-1];
        }
        
        if(A[i-1]=='0' && A[i-2]-'0'>2){
            return 0;
        }
        
        if((A[i-2]-'0'>0 && A[i-2]-'0'<2) || (A[i-2]=='2' && A[i-1]-'0'<=6)){
            temp[i] = temp[i] + temp[i-2];
        }
    }
    
    return temp[temp.size()-1];
}
*/


int func(char a,char b)
{
    int n=a-'0';
    int m=b-'0';
    return m*10+n;
}
int Solution::numDecodings(string A) 
{
        if(A[0]=='0'){return 0;}
        int n=A.length();
        vector<int> v(n+1);
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=n;i++)
        {
           int num=func(A[i-1],A[i-2]);
           if(A[i-1]=='0')
           {
               if(num==20 || num== 10)
               {
                   v[i]=v[i-2];
               }
               else 
               {
                   return 0;
               }
           }
           else
           {
               if(num>10 && num <=26)
               {
                   v[i]=v[i-1]+v[i-2];
               }
               else
               {
                   v[i]=v[i-1];
               }
           }
        }
        return v[n];
}

