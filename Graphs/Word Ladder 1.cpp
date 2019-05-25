int countDiff(string word, string end){
    int count =0;
    for(int i=0;i<end.length();i++){
        if(end[i]!=word[i]){
            count++;
        }
    }
    
    return count;
}

int Solution::ladderLength(string start, string end, vector<string> &dictV) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(start==end)
        return 1;
    
    queue <pair<string,int>> q;
    q.push({start,1});
    vector <int> vis (dictV.size(),0);
    
    while(!q.empty()){
        
        string word = q.front().first;
        int level = q.front().second;
        q.pop();
        int count = countDiff(word,end);
        
        if(count == 1){
            return level+1;
        }
        
        for(int i=0;i<dictV.size();i++){
            if(vis[i]==0){
                if(countDiff(word,dictV[i]) == 1){
                    vis[i] = 1;
                    q.push({dictV[i],level+1});
                }
            }
            
        }
    }
    
    return 0;
}
