int Solution::cpFact(int A, int B) {
    
    // vector <int> a;
    // for(int i=A;i>=0;i--){
    //     if(__gcd(B,i)==1){
    //         // a.push_back(i);
    //         if(A%i==0)
    //             return i;
    //     }
    // }
    
    // int n = a.size();
    // for(int i = n-1; i>=0;i--){
    //     if(A%a[i]==0)
    //         return a[i];
    // }
    
    
    // On doing prime factorisation of A and B, we get :

    // A = p1x1 . p2x2 . … . pkxk
    // B = q1y1 . q2y2 . … . qlyl

// Where pi ; i = 1, 2, …, k are prime factors of A and xi ; i = 1, 2, …, k 
// are their respective powers. Similarly, qj ; i = 1, 2, …, l are prime factors 
//of B and yi ; j = 1, 2, …, l are their respective powers. Let ri ; i = 1, 2, …, m 
//be the common factors of A and B. By repeating STEP1, we are reducing the 
//respective powers of ri by at least one, each time. Therefore, we reach a 
//point where powers of ri become zero and product of the rest prime-powers in A 
//form the largest divisor of A that is co-prime with B.
   
    while(__gcd(A,B)!=1){
        A = A/__gcd(A,B);
    }
    
    return A;
}
