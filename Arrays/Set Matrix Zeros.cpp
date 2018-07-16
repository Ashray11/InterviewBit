void Solution::setZeroes(vector<vector<int> > &A) {
 int r = A.size();
 int c = A[0].size();
 bool firstRowHasZero = false, firstColHasZero = false;

//find if 1st row has 0s
for(int j=0;j<c;j++){
     if(A[0][j]==0 ){
         firstRowHasZero=true;
         break;
     }
 }
 
//find if 1st column has 0s
 for(int j=0;j<r;j++){
     if(A[j][0]==0){
         firstColHasZero=true;
         break;
         
     }
 }
 
//find 0s at other places and store its info in 1st row/column
 for(int i =1;i<r;i++){
     for (int j=1;j<c;j++){
        if(A[i][j]==0){
            A[i][0]=0;
            A[0][j]=0;
        }
     }
 }
 
//set 0s at all the places except at 1st row/column
 for(int i=1;i<r;i++){
     for(int j=1;j<c;j++){
         if(A[i][0]==0 || A[0][j]==0){
             A[i][j]=0;
         }
     }
 }
 
 //set 0s in 1st row if needed
 if(firstRowHasZero){
     for(int i=0;i<c;i++){
         A[0][i]=0;
     }
 }
 
 //set os in 1st column if needed
 if(firstColHasZero){
     for(int i=0;i<r;i++){
         A[i][0]=0;
     }
}
    
}
