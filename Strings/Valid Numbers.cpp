int Solution::isNumber(const string A) {
        int e = 0;
        int d = 0;
        int m = 0;
        int p = 0;
        int n = 0;
        int i=0;
        int j=A.length()-1;
        while(A[i]==' ') i++;
        while(A[j]==' ') j--;
        while(i<j+1){
            if(A[i]=='+' || A[i]=='-' || A[i]=='.' || isdigit(A[i])){
                if(A[i]=='.') {d++;p=1;m=1;n=0;}
                if(d>1) {return 0;}
                if(A[i]=='+') {p++;}
                if(p>1) {return 0;}
                if(A[i]=='-') {m++;}
                if(m>1) {return 0;}
                if(isdigit(A[i])) {n++;p=1;m=1;}
                i++;
            }
            else if(A[i] == ' ') {return 0;}
            else if(A[i]=='e' && e==0 && n!=0){
                e++;
                d=1;
                m=0;
                p=0;
                n=0;
                i++;
            }
            else {return 0;}
        }
        if(n>0) {return 1;}
        else return 0;
}
