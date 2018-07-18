int segregate(vector <int> &a, int n) {
    int wall = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) {
            swap(a[i], a[wall]);
            wall++;
        }
    }
    return wall;
}
 
int Solution::firstMissingPositive(vector<int> &ar) {
    int n = ar.size();
    int l = segregate(ar, n);
    // Set all elements before l to positive, meaning unvisited
    for(int i=0;i<l;i++) {
        ar[i] = 1;
    }
    // Negate the elements as they are visited for the first time
    for (int i = l; i < n; i++) {
        if (abs(ar[i]) - 1 < n and ar[abs(ar[i]) - 1] > 0) {    
            ar[abs(ar[i]) - 1] = -1 * ar[abs(ar[i]) - 1];
        }
    }
    // Just Check which index has some unvisted element
    for (int i = 0; i < n; i++) {
        if (ar[i] > 0) {
            return (i+1);
        }
    }
    // when all positive integers in range [1,n] are present
    return n+1;
}
