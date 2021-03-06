vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int m = A.size();
    int n = A[0].size();
    int T, B, L, R;
    T = L = 0, B = m - 1, R = n - 1;
    int dir = 0;
    vector<int> ans;
    while (T <= B and R >= L) {
        if (dir == 0) {
            for (int i = L; i <= R; i++) ans.push_back(A[T][i]);
            T++;
        }
        else if(dir == 1) {
            for (int i = T; i <= B; i++) ans.push_back(A[i][R]);
            R--;
        }
        else if(dir == 2) {
            for (int i = R; i >= L; i--) ans.push_back(A[B][i]);
            B--;
        }
        else {
            for (int i = B; i >= T; i--) ans.push_back(A[i][L]);
            L++;
        }
        dir = (dir + 1) % 4;
    }
    return ans;
}
