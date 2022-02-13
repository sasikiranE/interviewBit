vector<int> Solution::getRow(int A) {
    vector<vector<int>> ans;
    for (int i = 0; i <= A; i++) {
        int n = i + 1;
        vector<int> v(n); 
        v[0] = v[n - 1] = 1;
        for (int k = 1; k < n - 1; k++) {
            v[k] = ans[i - 1][k - 1] + ans[i - 1][k];
        }
        ans.push_back(v); 
    } 
    return ans[A]; 
}

