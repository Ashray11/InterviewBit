int size;
int min_len;
vector <vector <string>> sol;
string last;

int countDiff(string word, string end){
    int count =0;
    for(int i=0;i<end.length();i++){
        if(end[i]!=word[i]){
            count++;
        }
    }
    
    return count;
}


void dfs(vector <string> &dict, vector <string> &v, vector <int> vis, int len){
    
    if(len>min_len){
        return;
    }    
    
    if(v[len-1] == last){
        if(min_len > len){
            min_len = len;
            sol.clear();
        }
        
        sol.push_back(v);
        return;
    }
    
    string s = v[len-1];
    for(int i=0;i<size;i++){
        if((vis[i] == 0) && (countDiff(s,dict[i])==1)){
            vis[i] = 1;
            v.push_back(dict[i]);
            dfs(dict,v,vis,len+1);
            v.pop_back();
            vis[i] = 0;
            //cout<<"hi";
        }
    }
}

vector<vector<string> > Solution::findLadders(string start, string end, vector<string> &dict) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    //vector <vector <int>> sol;
    sol.clear();
    vector <string> v;
    
    //dict.push_back(end);
    
    //input contains both start and end
    //unlike the previous problem - word ladder 1
    //so removing start from the dict
    int i;
    for(i=0;i<dict.size();i++){
        if(dict[i] == start){
            break;
        }
    }
    dict.erase(dict.begin()+i);
    
    //size = dict.size();
    //cout<<size;
    
    //input contains repeated strings
    unordered_set <string> st;
    for(int i=0;i<dict.size();i++){
        st.insert(dict[i]);
    }
    
    dict.assign(st.begin(),st.end());
    
    size = dict.size();
    min_len = INT_MAX;
    last = end;
    

    
    vector <int> vis(size,0);
    v.push_back(start);
    dfs(dict,v,vis,1);
    
    return sol;
}



