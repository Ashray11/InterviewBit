vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    unordered_map <string,int> count;
    for(int i=0;i<B.size();i++){
        count[B[i]]++;
    }
    vector<int> index;
    unordered_map <string,int> seen;
    int n = A.length();
    int num = B.size();
    
    if(n==0 || num==0){
        return index;
    }
    int len = B[0].size();
    
    for(int i=0;i<n-(num*len)+1;i++){
        int j=0;
        seen.clear();
        for( ;j<num;j++){
            string word = A.substr(i+j*len,len);
            if(count.find(word)!=count.end()){
                seen[word]++;
                if(seen[word]>count[word]){
                    break;
                }
            }
            else{
                break;
            }
        }
        if(j==num){
            index.push_back(i);
        }
    }
    return index;
}
