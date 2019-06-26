vector <int> v;
//int topEle;
int minm;
vector <int> minVec;

MinStack::MinStack() {
    v.clear();
    //topEle = -1;
    minm = INT_MAX;
    minVec.clear();
}

void MinStack::push(int x) {
    v.push_back(x);
    //topEle = topEle + 1;
    if(minVec.size()>0){
        int last = minVec[minVec.size()-1];
        minm = min(last,x);
    }
    else{
        minm = x;
    }
    minVec.push_back(minm);
}

void MinStack::pop() {
    if(v.size()>0){
        minVec.pop_back();
        v.pop_back();
        //topEle = topEle -1;
    }
}

int MinStack::top() {
    if(v.size()>0)
        return v[v.size()-1];
    else
        return -1;
}

int MinStack::getMin() {
    if(v.size()>0)
        return minVec[minVec.size()-1];
    return -1;
}

