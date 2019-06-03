int Solution::hammingDistance(const vector<int> &A) {

        vector<int> nums(A);
        if(nums.size()<=1){
            return 0;
        }
        //int zeroCount;
        long long res = 0;
        vector<int> zeroOne(2);
        while(true){
            int zeroCount = 0;
            zeroOne[0] = 0;
            zeroOne[1] = 0;
            for(int i=0;i<nums.size();i++){        
                if(nums[i]==0)
                    zeroCount++;
                zeroOne[nums[i]%2]++;
                nums[i] = nums[i] >> 1;
            }
            res = res + (long long)zeroOne[0]*zeroOne[1];
            if(zeroCount == nums.size()){
                return (2*res)%1000000007;
            }
        }
}
