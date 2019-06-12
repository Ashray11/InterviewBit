void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

        string res;
        int pos = 0;
        for(int i=0;i<A.size();i++){
            if(A[i] == ' '){
                if(i>pos){
                   res = A.substr(pos,i-pos) + " " + res; 
                }
                pos = i+1;
            }
            else if(i==A.length()-1){
                res = A.substr(pos,A.size()-pos) + " " + res;
            }
        }
        
        A = res.substr(0,res.size()-1);
        
}
