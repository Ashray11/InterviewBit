bool cmp(int a,int b){
    string p = to_string(a);
    string q = to_string(b);
    return (stoll(p+q) > stoll(q+p));
}
string Solution::largestNumber(const vector<int> &A) {
    vector<int> res(A.size());
    for(int i=0;i<A.size();i++){
        res[i] = A[i];
    }
    sort(res.begin(),res.end(),cmp);
    string temp = "";
    for(int i=0;i<res.size();i++){
        temp += to_string(res[i]);
    }
    if(temp[0] == '0'){
        return "0";
    }
    return temp;
}
