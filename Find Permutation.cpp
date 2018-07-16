vector<int> Solution::findPerm(const string A, int B) {

  vector<int> ans(B); 
  int start = 1, upto = B;
  for(int i = 0; i < B-1 && (start < upto); i++) {
      if(A[i] == 'D') 
        ans[i] = upto--;
      else 
        ans[i] = start++;
  }
  
  ans[B - 1] = start;
  return ans;
}
