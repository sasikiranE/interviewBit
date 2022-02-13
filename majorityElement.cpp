int Solution::majorityElement(const vector<int> &A) {
    map<int, int> cnt;
    for (auto &e : A) cnt[e]++;
    int ans = -1;
    int maxi = -1;
    for (auto &p : cnt) {
        if (p.second > maxi) {
            ans = p.first;
            maxi = p.second;
        }
    }
    return ans;
}

