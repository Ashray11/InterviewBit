bool isValid(vector<string> &nQueens, int row, int col, int &A){
    
    for(int i=0;i<row;i++){
        if(nQueens[i][col] == 'Q'){
            return false;
        }
    }
    
    for(int i=row-1,j=col-1;i>=0 && j>=0; i--,j--){
        if(nQueens[i][j] == 'Q'){
            return false;
        }
    }
    
    for(int i=row-1,j=col+1;i>=0 && j<A;i--,j++){
        if(nQueens[i][j] == 'Q'){
            return false;
        }
    }
    
    return true;
}

void solveQueens(vector<vector<string>>&sol,vector<string>&nQueens,int row, int &A){
    if(row==A){
        sol.push_back(nQueens);
        return;
    }
    
    for(int col=0;col!=A;col++){
        if(isValid(nQueens,row,col,A)){
            nQueens[row][col] = 'Q';
            solveQueens(sol,nQueens,row+1,A);
            nQueens[row][col] = '.';
        }
    }
}

vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<string> nQueens(A,string(A,'.'));
    vector<vector<string>> sol;
    solveQueens(sol,nQueens,0,A);
    return sol;
}
