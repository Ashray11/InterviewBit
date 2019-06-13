  string Solution::intToRoman(int A) {
        string table[4][10] = {
                {"","I","II","III","IV","V","VI","VII","VIII","IX"},
                {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                {"","M","MM","MMM"}
            };
            
            string ans="";
            int count=0;
            int num = A;
            while(num!=0){
                int x = num%10;
                ans = table[count][x] + ans;
                num = num/10;
                count++;
            }
            
            return ans;
    }

