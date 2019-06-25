int Solution::evalRPN(vector<string> &A) {
    int i=0;
    stack <int> s;
    int ans;
    while(i<A.size()){
        string x = A[i];
        if(x=="+" || x=="-" || x=="/" || x=="*"){
            int num1 = s.top();
            s.pop();
            int num2 = s.top();
            s.pop();
            if(x=="+")
                ans = num1+num2;
            else if(x=="-")
                ans = num2-num1;
            else if(x=="/")
                ans = num2/num1;
            else
                ans = num1*num2;
            s.push(ans);
        }
        else{
            int y = stoi(x);
            s.push(y);
        }
        i++;
    }
    
    return s.top();
}
