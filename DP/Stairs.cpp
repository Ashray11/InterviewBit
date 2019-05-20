int Solution::climbStairs(int A) {
     
     
      vector <int> memo (A+1);
      
      memo[0] = 0;
      memo[1] = 1;
      memo[2] = 2;
      
      for(int i=3;i<memo.size();i++){
          memo[i] = memo[i-1] + memo[i-2];
      }
      
      return memo[memo.size()-1];
}
