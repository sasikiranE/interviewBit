int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> cnt(n, 0);
    for (int i = 0; i < n; i++) {
        cnt[A[i] % n] += n;
    }
    for (int i = 0; i < n; i++) {
        if (cnt[i] >= 2 * n) return i;
    }
    return -1;
}
