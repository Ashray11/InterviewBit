int Solution::Mod(int A, int B, int C) {
    long long y;
    if(A==0)
        return 0;
    else if(B==0)
        return 1;
    else if(B%2==0){
        y = Mod(A,B/2,C);
        y = (y*y)%C;
    }
    else{
        y = A%C;
        y = (y*Mod(A,B-1,C))%C;
    }
    
    return (int)(y+C)%C;
}
