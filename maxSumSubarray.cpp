int Solution::maxSubArray(const vector<int> &A) {
    int best = A[0];
    int sum = A[0];
    for (int i = 1; i < A.size(); i++) {
        if (A[i] > sum + A[i]) {
            sum = A[i];
        }
        else {
            sum = sum + A[i];
        }
        best = max(best, sum);
    }
    return best;
}

