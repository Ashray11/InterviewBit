int Solution::largestRectangleArea(vector<int> &A) {
    stack<int>s;
    int area = 0;
    int max_area = INT_MIN;
    A.push_back(0);
    for(int i=0;i<A.size();i++){
        while(!s.empty() && A[s.top()]>=A[i]){
            int height = A[s.top()];
            s.pop();
            int ind = s.empty() ? -1 : s.top();
            area = height*(i-ind-1);
            if(max_area<area)
                max_area = area;
        }
        s.push(i);
    }
    
    return max_area;
}
