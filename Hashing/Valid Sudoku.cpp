int Solution::isValidSudoku(const vector<string> &A) {
    int rows[9][9] = {0};
    int cols[9][9] = {0};
    int blocks[3][3][9] = {0};
    
    for(int r=0;r<9;r++){
        for(int c=0;c<9;c++){
            if(A[r][c]!='.'){
               int num = A[r][c] - '1';
                if(rows[r][num]++) 
                    return 0;
                if(cols[c][num]++)
                    return 0;
                if(blocks[r/3][c/3][num]++)
                    return 0;
            } 
        }
            
    }
    
    return 1;
}
