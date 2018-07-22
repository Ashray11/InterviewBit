void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    for(int i=0;i<n;i++){
        A[i] += (A[A[i]]%n)*n;
    }
    
    for(int i=0;i<n;i++){
        A[i] /= n;
    }
 
}

/*we are incrementing the valures of arr so the elements are no longer in the range 0:n-1. try to execute this exemple in a peace of paper for more clarity:
ex: arr[]={1,2,0};
for loop 1
iteratiuons:
arr[0]=arr[0]+(arr[arr[0]]%3)*3 (==1+(2%3)*3=7) //arr[0] out of the range 0:n-1
arr[1]=arr[1]+(arr[arr[1]]%3)*3 (==2+(0%3)*3=2)
arr[2]=arr[2]+(arr[arr[2]]%3)*3 (==0+(7%3)*3=3) //in this case the modulo is necessary to get original value of arr[arr[2]]==arr[0]
for loop 2
iteratiuons:
arr[0]=arr[0]/3 (==7/3=2)
arr[1]=arr[1]/3 (==2/3=0)
arr[2]=arr[2]/3 (==3/3=1)

Mod actually gives you what was there in actual input.

without mod, we may get the updated values.

by taking mod we actually revert back to old,
because fresh value was obtained by multiplying n, that will be cancelled by mod n
*/
