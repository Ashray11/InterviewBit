int X[] = {-1,1,0,0};
int Y[] = {0,0,-1,1};

void floodfill(int x, int y, char c, vector<vector<char>> &A){
    int row = A.size()-1;
    int col = A[0].size()-1;
    
    A[x][y] = c;
    
    for(int i=0;i<4;i++){
        int a = x + X[i];
        int b = y + Y[i];
        if(a >=0 && a<= row && b>=0 && b<= col && A[a][b] == '-')
            floodfill(a,b,c,A);
    }
}

//Make some changes in floodfill algo 
void Solution::solve(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int row = A.size();
    int col = A[0].size();
    
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j] == 'O'){
                A[i][j] = '-';
            }
        }
    }
    
    for(int i=0;i<A.size();i++){
        if(A[i][0] == '-'){
            floodfill(i,0,'O',A);
        }
    }
    
    for(int i=0;i<A.size();i++){
        if(A[i][col-1] == '-'){
            floodfill(i,col-1,'O',A);
        }
    }
    
    for(int i=0;i<A[0].size();i++){
        if(A[0][i] == '-'){
            floodfill(0,i,'O',A);
        }
    }
    
    for(int i=0;i<A[0].size();i++){
        if(A[row-1][i] == '-'){
            floodfill(row-1,i,'O',A);
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(A[i][j] == '-'){
                A[i][j] = 'X';
            }
        }
    }
}
