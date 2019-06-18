  vector<int> Solution::maxone(vector<int> &A, int B) {
        int l = 0, r = 0, zeroCount = 0, bestWin= 0, bestL = 0, bestR =0;
        while(r<A.size()){
            if(zeroCount <= B){
                if(A[r] == 0){
                    zeroCount++;
                }
                r++;
            }
            
            if(zeroCount > B){
                if(A[l] == 0){
                    zeroCount--;
                }
                l++;
            }
            
            if((r-l > bestWin) && (zeroCount <= B)){
                bestWin = r-l;
                bestL = l;
                bestR = r;
            }
        }
        
        vector <int> v;
        for(int i=bestL;i<bestR;i++){
            v.push_back(i);
        }
        
        return v;
    }

