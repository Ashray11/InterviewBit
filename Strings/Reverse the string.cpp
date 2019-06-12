void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int start, count;
    int i = A.length()-1;
    string temp="";
    while(i>=0){
        count = 0;
        while(A[i] == ' ' && i>=0){
            i--;
        }
        while(A[i] != ' ' && i>=0){
            count++;
            i--;
        }
        start = i+1;
        temp.append(A,start,count);
        if(i>=0)
            temp+=" ";
    }
    
    A = temp;
}
